class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        vector<int> temp;
        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[0])
                temp.push_back(i);
        }
        bool check = false;
        int x = -1;
        for (int i = 0; i < temp.size(); i++)
        {
            for (int j = 0; j < needle.size() && (temp[i] + j) < haystack.size(); j++)
            {
                if (haystack[temp[i] + j] != needle[j])
                {
                    break;
                }
                else if (haystack[temp[i] + j] == needle[j] && j == needle.size() - 1)
                {
                    x = temp[i];
                    check = true;
                }
            }
            if (check == true)
                break;
        }
        return x;
    }
};