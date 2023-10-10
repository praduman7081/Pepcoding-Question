#include<iostream>
using namespace std;

int main(){
    int a,b,rem;
    cout<<"enter two number for GCD"<<endl;
    cin>>a>>b;
    int org1 = a;
    int org2 = b;
    while(a%b !=0){
        
            rem = a%b;
            a=b;
            b=rem;
        
    }
    int gcd = b;
    cout<<"GCD = "<<gcd<<endl;
    cout<<"LCM = "<< (org1 *org2)/gcd<<endl;
    
    return 0;
}