class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int i = 0;
        for (int j = 0; j < nums.size() && i <= nums.size(); j++)
        {
            if (nums[j] == i)
            {
                i++;
                j = -1;
            }
            else
            {
                if (j == nums.size() - 1)
                {
                    return i;
                    break;
                }
            }
        }
        return nums.size();
    }
};