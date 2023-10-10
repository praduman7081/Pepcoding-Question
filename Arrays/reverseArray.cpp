#include<iostream>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
    }

    
    int  i =0;
    int j = n-1;
    while(i<=j){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i++;
        j--;
    }
    cout<<"revrse array\n";
    for(int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}