#include<iostream>
using namespace std;

int main()
{
     int m,n;
    cin>>m>>n;
    int ** arr = new int*[m];
     
    for(int i=0; i<m; i++){
        arr[i] = new int[n];
        for(int j=0; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"Enter the key to search\n";
    cin>>key;
    int i=0, j=n-1;
    int flag =1;

    while(i<m  && j>=0){
        
        if(arr[i][j]==key){
            flag =0;
            cout<<"Position of key = "<<i<<" "<<j;
            break;
        }
       
        else if(arr[i][j]>key){
            j--;
        }
        else {
         i++;
        }
    }

    if(flag){
        cout<<"Not exist\n";
    }
    return 0;
}