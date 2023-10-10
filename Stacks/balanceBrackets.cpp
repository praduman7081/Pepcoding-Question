#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int largestArea(vector<int> arr){
    vector<int> lb(arr.size());
    stack<int> st;
    lb[0] = -1;
    st.push(0);
    for(int i =1; i<arr.size)


    vector<int> rb(arr.size());

    int mxArea =0;
    int widgth ;
    for(int i=0; i<arr.size(); i++){
        widgth = rb[i]- lb[i] - 1;
       int area = arr[i]* widgth;
       if(area>mxArea){
        mxArea = area;
       }

    }

    return mxArea;

}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans  = largestArea(arr);
    cout<<ans;
    return 0;
}
