#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, count =0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int rem = n;
    while(n>0){
      count++;
      n= n/10;
    }

    int div = pow(10,(count-1));
    while(rem != 0){
        cout<<rem/div<<endl;
        rem= rem%div;
        div= div/10;
    } 
    return 0;
}