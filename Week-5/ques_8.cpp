class Solution
{
public:
    int numSubseq(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int mod = 1e9 + 7;
        int count = 0;
        int front = 0;
        int back = nums.size() - 1;
        vector<int> two(nums.size() + 1, 1);
        for (int i = 1; i <= nums.size(); i++)
        {
            two[i] = (two[i - 1] * 2) % mod;
        }
        while (front <= back)
        {
            int diff = back - front;
            if (nums[front] + nums[back] <= target)
            {
                count = (count + two[diff]) % mod;
                front++;
            }
            else
                back--;
        }
        return count;
    }
};