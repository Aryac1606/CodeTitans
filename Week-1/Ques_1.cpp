class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            s.push(nums[i]);
        }
        int x = n - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n && j != x; j++)
            {
                if (target - s.top() == nums[j])
                    return {x, j};
            }
            s.pop();
            x = x - 1;
        }
        return {};
        s.empty();
    }
};