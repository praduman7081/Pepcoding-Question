#include<iostream>
using namespace std;

void multiplication(int* a1,int* a2, int m1, int n1, int n2){
    int* a3 = new int[m1*n2];
    int ans =0;

    for(int i=0 ;i<m1; i++){
        for(int j=0; j<n2; j++){
            for(int k=0 ; k<n1; k++){
                *(a3+i * n2 +j) += *(a1+i + n1*k) * *(a2+k * n2+j);
            }

        }
    }

    for(int i=0; i<m1; i++){
        for(int j=0; j<n2; j++){
            cout<<*(a3+i * n2+j)<<" ";
             
        }
        cout<<"\n";
    }
}

int main()
{
    int m1,n1;
    cout<<"Enter number of rows and coulmns of first matrix\n";
    cin>>m1>>n1;

    int* a1 = new int[m1*n1];
    cout<<"Enter first matrix\n";
    for(int i=0 ;i<m1; i++){
        for(int j=0 ;j<n1; j++){
            cin>>*(a1+i * n1+j);
        }
    }
     int m2,n2;
    cout<<"Enter number of rows and coulmns of first matrix\n";
    cin>>m2>>n2;

    int* a2 = new int[m2*n2];
    cout<<"Enter second matrix\n";
    for(int i=0 ;i<m2; i++){
        for(int j=0 ;j<n2; j++){
           cin>>*(a2+i * n2+j);
        }
    }

    if(n2 == m2){
        multiplication(a1,a2,m1,n1,n2);
    }
    else{
        cout<<"Invalid input/n";
    }

    return 0;
}