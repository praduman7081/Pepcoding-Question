#include<iostream>
using namespace std;

int main()
{
    int n,count =0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    while(n>0){
      count++;
      n= n/10;
    }
    cout<<"Number of digits = "<<count;
    return 0;
}