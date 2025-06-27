class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> words;
        string temp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
                temp = temp + s[i];
            else
            {
                words.push_back(temp);
                temp = "";
            }
        }
        words.push_back(temp);
        if (words.size() != pattern.size())
        {
            return false;
        }
        unordered_map<char, string> m1;
        unordered_map<string, char> m2;
        for (int i = 0; i < words.size(); i++)
        {
            char x = pattern[i];
            string y = words[i];
            if (m1.count(x))
            {
                if (m1[x] != y)
                    return false;
            }
            else
                m1[x] = y;
            if (m2.count(y))
            {
                if (m2[y] != x)
                    return false;
            }
            else
                m2[y] = x;
        }
        return true;
    }
};