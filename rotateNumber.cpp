#include<iostream>
using namespace std;

int main(){
    int n,k;
    cout<<"Enter the number to rotate and number of digits"<<endl;
    cin>>n>>k;
    int count =0;
    int temp =n;
    while(temp>0){
        temp=temp%10;
        count++;
    }

    k = k% count;
    if(k<0){
        k = k+ count;
    }


    int div =1;
    int mul =1;
    for(int i=1; i<=count; i++){
        if(i<=k){
            div =div*10;
        }
        else{
            mul = mul*10;
        }
    }
    int rem = n%div;
    int que = n/div;

    cout<< (rem *mul) + que<<endl;
    return 0;
}