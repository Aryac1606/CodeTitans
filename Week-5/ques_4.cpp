class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int neg = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
                nums[i] = -nums[i];
        }
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
        // sorted
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] * nums[i];
        }
        return nums;
    }
};