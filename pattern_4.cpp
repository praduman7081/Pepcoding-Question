/*
    *   *   *   *   *   *
        *   *   *   *   *
            *   *   *   *
                *   *   *
                    *   *
                        *
      
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int sp=1;
    int st=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<sp; j++){
            cout<<"\t";
        }
        for(int j=1; j<=st; j++){
            cout<<"*\t";
        }
        sp++;
        st--;
        cout<<"\n";
    }
    return 0;
}