#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,b;
    cout<<"Enter the decimal number and base"<<endl;
    cin>>n>>b;
    int res=0;
    int i = 1;
    while(n>0){
     int rem = n%b;
      res= res+(i*rem);
      n= n/b;
      i=i*10;
      
    } 


    cout<<res<<endl;
    return 0;
}