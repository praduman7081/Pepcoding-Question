#include <iostream>
#include <stack>
#include <string>
using namespace std;

    // size of sring must be less than 9
    // single digit use only once
    // pattern is basically on the increasing and decreasing order
    // Algo...
        /*
          if i ocures then push , increase num, pop while stack is empty untill.
          //else  push , increase num
        */
    // Ex..
        /*
         iii   -> 1234
         dd    -> 321
         iddi  -> 14325
        */

int main()
{
    string str;
    cin >> str;
    stack<int> st;
    int num = 1;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'i')
        {

            st.push(num);
            num++;

            while (st.size() != 0)
            {
                cout << st.top();
                st.pop();
            }
        }
        else
        {
            st.push(num);
            num++;
        }
    }
    
    st.push(num);

    while (st.size() != 0)
    {
        cout << st.top();
        st.pop();
    }

    

    return 0;
}