class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int n = nums.size();
        int max = nums[0];
        int min = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > max)
                max = nums[i];
            if (nums[0] < min)
                min = nums[i];
        }
        if (min < 0)
        {
            if (max < (-min))
                max = -min;
        }
        vector<int> index(20001, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            index[nums[i] + 10000]++;
        }
        for (int i = index.size() - 1; i > 0; i--)
        {
            if (index[i] >= k)
                return i - 10000;
            index[i - 1] = index[i - 1] + index[i];
        }
        return -1;
    }
};