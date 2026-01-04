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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return NULL;
        int cnt = 0;
        ListNode* temp = head;
        while(temp)
        {
            cnt++;
            temp = temp->next;
        }
        int k = cnt/2+1;
        temp = head;
        ListNode* prev = NULL;
        while(temp)
        {
            k--;
            if(k == 0)
            {
                prev->next = prev->next->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};