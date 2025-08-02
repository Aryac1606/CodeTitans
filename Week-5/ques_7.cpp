class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
            n = n - 1;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (i == 0 && nums[j] - nums[i] == k && nums[j] != nums[j - 1])
                {
                    ans++;
                }
                else if (i != 0 && nums[j] - nums[i] == k && nums[i] != nums[i - 1] && nums[j] != nums[j - 1])
                {
                    ans++;
                }
            }
        }
        if (k == 0)
            for (int i = 0; i < nums.size() - 1; i++)
            {
                if (nums[i] == nums[i + 1] && i == 0)
                    ans++;
                else if (nums[i] == nums[i + 1] && nums[i] != nums[i - 1])
                    ans++;
            }
        return ans;
    }
};