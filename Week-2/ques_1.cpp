class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        vector<int> check_s(26, 0);
        vector<int> check_t(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            check_s[s[i] - 'a']++;
            check_t[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (check_s[i] != check_t[i])
                return false;
        }
        return true;
    }
};