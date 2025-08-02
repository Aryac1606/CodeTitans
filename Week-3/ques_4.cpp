class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        vector<int> check;
        while (head != NULL)
        {
            check.push_back(head->val);
            head = head->next;
        }
        for (int i = 0; 2 * i < check.size(); i++)
        {
            if (check[i] != check[check.size() - i - 1])
                return false;
        }
        return true;
    }
};