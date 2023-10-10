#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the sides of triangle"<<endl;
    cin>>a>>b>>c;

    int h = max(a,max(b,c));
    if(h != a && h!= b){
        if( h*h == a*a +b*b){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else if(h != b && h!= c){
        if( h*h == c*c +b*b){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
   else{
        if( h*h == a*a +c*c){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}