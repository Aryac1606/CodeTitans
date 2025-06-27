class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.size();
        reverse(s.begin(), s.end());
        vector<bool> check(n, false);
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ' ')
                check[i] = true;
        }
        int x = 0, max = 0;
        for (int i = 0; i < n; i++)
        {
            if (check[i] == false)
            {
                max++;
            }
            else
                break;
        }
        for (int i = max; i < n; i++)
        {
            if (check[i] == true)
            {
                x++;
            }
            else
                break;
        }
        return x;
    }
};
