/*
    1   
    2   3
    4   5   6
    7   8   9   10

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter numbers of rows"<<endl;
    cin>>n;
    int point =1;

    for(int i =1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<point<<"\t";
            point++;
        }
        cout<<"\n";
    }

    return 0;
}