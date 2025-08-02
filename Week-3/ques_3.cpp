class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        vector<int> temp;
        ListNode *tail = head;
        while (tail != NULL)
        {
            temp.push_back(tail->val);
            tail = tail->next;
        }
        ListNode *first = new ListNode(temp[temp.size() - 1]);
        ListNode *ans = first;
        for (int i = temp.size() - 2; i >= 0; i--)
        {
            ans->next = new ListNode(temp[i]);
            ans = ans->next;
        }
        return first;
    }
};