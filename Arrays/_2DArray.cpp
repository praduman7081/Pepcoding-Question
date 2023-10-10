#include<iostream>
#include<array>

using namespace std;

int main(){
    int n,m;
    cout<<"Enter number of rows and columns\n";
    cin>>m>>n;

    // Allocate memory blocks dynamically..
    int* arr = new int[m*n];
    int c =0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          cin>>*(arr+i * n+j);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<*(arr+i * n+j)<<" ";
             
        }
        cout<<"\n";
    }

    cout<<sizeof(arr/arr[0])<<endl;
    
    return 0;
}