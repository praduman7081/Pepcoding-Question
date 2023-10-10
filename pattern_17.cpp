/*
                *
                *   *
                *   *   *
    *   *   *   *   *   *   *
                *   *   *
                *   *
                *



*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sp = n / 2;
    int st =1;

    for (int i = 1; i <= n; i++)
    {
       
        if(i==(n+1)/2){
            for(int j=1; j<=n; j++){
            cout<<"*\t";
        }
        }
        else{
         for(int j=1; j<=sp; j++){
            cout<<"\t";
        }
        for(int j=1; j<=st; j++){
            cout<<"*\t";
        }
        }
        
        
        if(i<=n/2){
            st++;
        }
        else{
            st--;
        }
        cout<<"\n";
    }
    
    return 0;
}
