class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        vector<int> ans;
        if (list1 == NULL)
            return list2;
        else if (list2 == NULL)
            return list1;
        inter(list1, list2, ans);
        ListNode *first = new ListNode(ans[0]);
        ListNode *tail = first;
        for (int i = 1; i < ans.size(); i++)
        {
            tail->next = new ListNode(ans[i]);
            tail = tail->next;
        }
        return first;
    }

public:
    vector<int> inter(ListNode *l1, ListNode *l2, vector<int> &list)
    {
        if (l1 == NULL)
            while (l2 != NULL)
            {
                list.push_back(l2->val);
                l2 = l2->next;
                return list;
            }
        if (l2 == NULL)
            while (l1 != NULL)
            {
                list.push_back(l1->val);
                l1 = l1->next;
            }
        if (l1->val <= l2->val)
        {
            list.push_back(l1->val);
            if (l1->next != NULL)
                inter(l1->next, l2, list);
            else
                while (l2 != NULL)
                {
                    list.push_back(l2->val);
                    l2 = l2->next;
                }
        }
        else if (l1->val >= l2->val)
        {
            list.push_back(l2->val);
            if (l2->next != NULL)
                inter(l1, l2->next, list);
            else
                while (l1 != NULL)
                {
                    list.push_back(l1->val);
                    l1 = l1->next;
                }
        }
        return list;
    }
};