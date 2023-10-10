#include <iostream>
#include <array>
#include <vector>
#include <stack>
using namespace std;

                    // O(2N)  or O(N)

vector<int> nextGreater(vector<int> arr)
{
    int n = arr.size();
    vector<int> ra(n);
    stack<int> st;
    ra[0] = -1;
    st.push(arr[0]);

    for (int i = 1; i <n; i++)
    {

        while (st.size() != 0 && arr[i] > st.top())
        {
            st.pop();
        }

        if (st.size() != 0)
        {
            ra[i] = st.top();
        }
        else
        {
            ra[i] = -1;
        }

        st.push(arr[i]);
    }
    //       for(int i: ra ){
    //     cout<<i<<"\t";
    //    }
    return ra;
}

int main()
{
    int n;
    cout << "Enter size of array\n";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //    cout<<"hi\n";
    //   nextGreater(arr);
    vector<int> newarr = nextGreater(arr);

    for (int i : newarr)
    {
        cout << i << " ";
    }

    return 0;
}