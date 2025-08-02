class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
        inter(root, ans);
        return ans;
    }

public:
    void inter(TreeNode *root, vector<int> &ans)
    {
        ans.push_back(root->val);
        if (root->left != nullptr)
        {
            inter(root->left, ans);
        };
        if (root->right != nullptr)
        {
            inter(root->right, ans);
        };
    }
};