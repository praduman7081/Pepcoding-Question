#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cout<<"Enter number of test cases"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the number"<<endl;
        cin>>n;
        bool flag = true;
        for(int i=2; i< sqrt(n); i++){
            if(n%i==0){
                flag = false;
                break;
            }
        }

        if(flag){
            cout<<"Given number is prime"<<endl;
        }
        else{
            cout<<"Given number is not prime"<<endl;
        }

    }
}