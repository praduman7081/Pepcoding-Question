#include <iostream>
#include <stack>
using namespace std;

bool duplicateBrackets(string exp)
{
    stack<char> st;

    for (char c : exp)
    {
        if (c != ')')
        {
            st.push(c);
        }

        else
        {
            if (st.top() == '(')
            {
                return true;
            }
            else
            {
                while (st.top() != '(')
                {
                    st.pop();
                }
            }

            st.pop();
        }
    }
    return false;
}

int main()
{
    string str;
    cin >> str;
    bool ans = duplicateBrackets(str);
    ans !=0?cout<<"true" : cout<<"false"; 


    //  int arr[3] ={2,3,4};
    //  for(int i: arr){
    //     cout<<i<<" ";
    //  }
    // for(char c : str){
    //     cout<<c<<" ";
    // }
    return 0;
}