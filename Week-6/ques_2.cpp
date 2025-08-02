class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        if (root == NULL)
            return true;
        bool ans;
        ans = decision(root->left, root->right);
        return ans;
    }
    // comparison of 2 trees
public:
    bool decision(TreeNode *r1, TreeNode *r2)
    {
        bool ans = false;
        if (r1 == NULL && r2 == NULL)
            ans = true;
        else if (r1 == NULL || r2 == NULL || r1->val != r2->val)
            return false;
        else if (r1->val == r2->val)
        {
            ans = true;
            ans = decision(r1->left, r2->right);
            if (ans == false)
                return false;
            ans = decision(r1->right, r2->left);
            if (ans == false)
                return false;
        }
        return ans;
    }
};