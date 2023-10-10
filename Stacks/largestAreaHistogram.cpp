#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestArea(vector<int> arr)
{

    vector<int> lb(arr.size());
    stack<int> st;
    lb[0] = -1;
    st.push(0);
    for (int i = 1; i < arr.size(); i++)
    {

        while (st.size() != 0 && arr[i] < arr[st.top()])
        {
            st.pop();
        }

        if (st.size() == 0)
        {
            lb[i] = -1;
        }
        else
        {
            lb[i] = st.top();
        }

        st.push(i);
    }

    vector<int> rb(arr.size());
    stack<int> st1;
    rb[arr.size() - 1] = arr.size();
    st1.push(arr.size() - 1);
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        while (st1.size() != 0 && arr[i] < arr[st1.top()])
        {
            st1.pop();
        }
        if (st1.size() == 0)
        {
            rb[i] = arr.size();
        }
        else
        {
            rb[i] = st1.top();
        }

        st1.push(i);
    }

    int maxarea = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int widght = rb[i] - lb[i] - 1;
        int area = arr[i] * widght;
        if (area > maxarea)
        {
            maxarea = area;
        }
    }

    return maxarea;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = largestArea(arr);
    cout << ans;
    return 0;
}