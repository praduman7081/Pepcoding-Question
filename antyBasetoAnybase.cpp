#include<iostream>
using namespace std;

int main()
{
    int n,b;
    cout<<"Enter the number and its base\n";
    cin>>n>>b;
    int cb;
    cout<<"Enter to base of conversion\n";
    cin>>cb;
    long long rv =0;
    int p =1;
    while(n>0){
        int rem = n%cb;
        rv+=rem*p;
        n=n/cb;
        p= p*b;
    }
    cout<<rv<<endl;
    return 0;
}