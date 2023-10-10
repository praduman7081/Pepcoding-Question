/*
    1                                               using permutation and combination formula
    1   1
    1   2   1
    1   3   3   1
    1   4   6   4   1
    1   5   10  10  5   1
    ...

*/

#include<iostream>
using namespace std;

int fact(int k){
    int res=1;
    for(int i=1; i<=k; i++){
       res = res*i;
    }

    return res;
}

int main(){
    int n;
    int res;
    cout<<"Enter number of rows\n";
    cin>>n;
    for(int i =0; i<n; i++){
        for(int j=0; j<=i; j++){
            res = fact(i)/(fact(i-j)* fact(j));
            cout<<res<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}

