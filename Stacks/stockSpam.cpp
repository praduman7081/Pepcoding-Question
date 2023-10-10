#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> stockSpam(vector<int> arr){
    int n = arr.size();
    vector<int> ans(n);

    stack<int> st;
    ans[0] = 1;
    st.push(0);
    for(int i=1; i<n; i++){
    //  int idx = 1;

    // if work on value then compare arr[i]> st.top()...idx
        while(st.size() !=0 && arr[i]>arr[st.top()]){
            st.pop();
            // idx++;

        }
        if(st.size() != 0 ){
            ans[i] = i-st.top();
            // ans[i]= idx;
        }
        else{
            ans[i] = i+1;
        }

        st.push(i);
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> spam = stockSpam(arr);
    for(int i: spam){
      cout<<i<<" ";
    }
    return 0;
}