#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number for fiboncci serise"<<endl;
    cin>>n;
    int num1=0;
    int num2=1;
    cout<<num1<<" "<<num2<<" ";
    n =n-2;
    while(n--){
        int sum =num1+num2;
        cout<<sum<<" ";
        num1= num2;
        num2= sum;
    }
    return 0;
}