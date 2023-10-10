#include<iostream>
using namespace std;

int main()
{
     int n1;
    cout<<"Enter the size of array 1\n";
    cin>>n1;
    int a1[n1];
    for(int i=0; i<n1; i++){
        cin>>a1[i];
    }
    int n2;
    cout<<"Enter the size of array 2\n";
    cin>>n2;
    int a2[n2];
    for(int i=0; i<n2; i++){
        cin>>a2[i];

    }

    int diff[n1>n2? n1: n2];

    int i = sizeof(a1)/sizeof(a1[0]) -1;
    int j = sizeof(a2)/sizeof(a2[0])-1;
    int k = sizeof(diff)/sizeof(diff[0])-1;

    int c=0;

    while(k>=0){
        int d =0;
        int a1v = i>=0? a1[i] : 0;
        if(a2[j]+c >=a1v){
            d = a2[j]+c - a1v;
            c=0;
        }
        else{
            d = a2[j] +c +10 - a1v;
            c=-1;
        }

        diff[k] = d;

        i--;
        j--;
        k--;
    }

    int idx=0;
    while(idx<sizeof(diff)/sizeof(diff[0])){
        if(diff[idx]== 0){
            idx++;
        }
        else{
            break;
        }
    }
    while(idx<sizeof(diff)/sizeof(diff[0])){
        cout<<diff[idx];
        idx++;
    }
    return 0;
}