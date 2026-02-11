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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* mover = dummy;
        while(temp->next)
        {
            if(temp->val == 0)
            {
                temp = temp->next;
                int sum = 0;
                while(temp->val != 0)
                {
                    sum += temp->val;
                    temp = temp->next;
                }
                mover->next = new ListNode(sum);
                mover = mover->next;
            }
        }
        return dummy->next;
    }
};