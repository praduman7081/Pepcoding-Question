/*
    0
    1   1
    2   3   5
    8   13  21  34....

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows\n";
    cin>>n;
    int num1 =0, num2=1;
    int sum;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i==1  && j ==1){
                cout<<num1<<"\t";
            }
            else if(i == 2 && j==1){
                cout<<num2<<"\t";

            }
            else{
                sum = num1 +num2;
                num1 = num2;
                num2= sum;
                cout<<sum<<"\t";

            }
        }

        cout<<"\n";
    }
    return 0;
}

