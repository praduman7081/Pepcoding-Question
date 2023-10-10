#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number to find prime factorization"<<endl;
    cin>>num;
    int i=2;
    while(num !=1){
        if(num%i ==0){
            cout<<i<<" ";
            num=num/i;
        }
        else{
            i++;
        }

    }

    return 0;
}