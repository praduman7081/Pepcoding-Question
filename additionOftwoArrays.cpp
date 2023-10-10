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

    int sum[n1>n2? n1: n2];

    int i = sizeof(a1)/sizeof(a1[0]) -1;
    int j = sizeof(a2)/sizeof(a2[0])-1;
    int k = sizeof(sum)/sizeof(sum[0])-1;

    int c=0;

    while(k>=0){
    int dig =c;
        if(j>=0){
            dig+=a2[j]+c;
        }
        if(i>=0){
            dig+= a1[i];
        }

        c=dig/10;
        dig = dig%10;

        sum[k] = dig;

        i--;
        j--;
        k--;
    }

    if(c != 0){
        cout<<c;
    }
    for(int i=0; i<sizeof(sum)/sizeof(sum[0]); i++){
       cout<<sum[i];

    }
    return 0;
}