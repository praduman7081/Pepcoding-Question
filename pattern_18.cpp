#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sp = 1;
    int is = n-4;
    int st = n;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<sp; j++){
            cout<<"\t";
        }
        // if(i<=n/2){
        //     if(i==1){
        //       for(int j=1; j<=st; j++){
        //     cout<<"*\t";
        //     }
        //     }
        //     else{
        //         cout<<"*\t";
        //          for(int k = 1; k<=is; k++){
        //         cout<<"\t";
        //     }
        //         cout<<"*\t";
        //         is-=2;
        //     }
        // }
        // else{
        //   for(int j=1; j<=st; j++){
        //     cout<<"*\t";
        //     }
        // }
        for(int j=1; j<=st; j++){
            if(i>1 && i<=n/2  && j>1  &&  j< st){
                cout<<"\t";
            }
            else{
                cout<<"*\t";
            }
        }
        if(i<= n/2){
            st-=2;
            sp++;
            
        }
        else{
            st+=2;
            sp--;
        }
        cout << endl;

    }
    return 0;
}