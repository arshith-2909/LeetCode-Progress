/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int gcd(int a, int b)
    {
        while(a && b)
        {
            int mini = min(a, b);
            if(a == mini)
            {
                b %= mini;
            }
            else
            {
                a %= mini;
            }
        }
        return a ? a : b;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* cur = head;
        ListNode* curnext = head->next;
        while(curnext)
        {
            ListNode* node = new ListNode(gcd(cur->val, cur->next->val));
            cur->next = node;
            node->next = curnext;
            cur = curnext;
            curnext = curnext->next;
        }
        return head;
    }
};