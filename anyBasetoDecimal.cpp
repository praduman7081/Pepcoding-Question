#include<iostream>
using namespace std;

int main()
{
    int n,b;
    cout<<"Enter the number and its base\n";
    cin>>n>>b;
    int rv =0;
    int p = 1;
    while(n>0){
        int rem = n%10;
        rv+=rem*p;
        n= n/10;
        p =p*b;

    }
    cout<<rv<<endl;

    return 0;
}