class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int n = s.size();
        if (s.size() != goal.size())
            return false;
        char x = goal[0];
        bool check = false;
        for (int j = 0; j <= n; j++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                goal[i] = goal[i + 1];
            }
            goal[n - 1] = x;
            x = goal[0];
            for (int a = 0; a < n; a++)
            {
                if (goal[a] != s[a])
                {
                    check = false;
                    break;
                }
                else
                    check = true;
            }
            if (check == true)
                return true;
        }
        return false;
    }
};