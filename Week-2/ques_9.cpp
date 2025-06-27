class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> st;
        string temp;
        string ans;
        int x;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
                x = i;
            break;
        }
        for (int i = x; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                temp = temp + s[i];
            }
            else
            {
                if (temp != "")
                {
                    st.push(temp);
                    temp = "";
                }
            }
        }
        st.push(temp);
        while (!st.empty())
        {
            if (st.top() != "")
            {
                ans = ans + st.top();
                st.pop();
                if (!st.empty())
                    ans = ans + " ";
            }
            else
                st.pop();
        }
        return ans;
    }
};