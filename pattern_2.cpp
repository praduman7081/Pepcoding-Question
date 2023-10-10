/*
                        *
                    *   *
                *   *   *
            *   *   *   *
        *   *   *   *   * 
    *   *   *   *   *   * 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i= 1; i<=n; i++){
        for(int k=1; k < n-i+1; k++){
            cout<<"\t";
        }
        for(int j=1; j<=i; j++){
            cout<<"*\t";
        }
        cout<<"\n";
    }

  // other opproach....

    int sp = n-1;
    int st = 1;
    for(int i=1; i<=n; i++){
        for(int j= 1; j<=sp; j++){
            cout<<"\t";
        }
        for(int j=0; j<st; j++){
            cout<<"*\t";
        }

        sp--;
        st++;
        cout<<"\n";
    }
    return 0;
}
