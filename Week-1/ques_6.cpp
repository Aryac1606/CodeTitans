class Solution
{ // index array use karne ka try
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans(nums1.size(), -1);
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    for (int x = j; x < nums2.size(); x++)
                    {
                        if (nums2[j] < nums2[x])
                        {
                            ans[i] = nums2[x];
                            break;
                        }
                    }
                }
            }
        }
        return ans;
    }
};