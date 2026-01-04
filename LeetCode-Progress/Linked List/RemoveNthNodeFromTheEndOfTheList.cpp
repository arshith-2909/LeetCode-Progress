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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)
            return NULL;

        ListNode* temp = head;    
        if(head->next == nullptr && n==1)
            return NULL;
        
        int cnt = 0;
        while(temp)
        {
            cnt++;
            temp = temp->next;
        }
        temp = head;
        ListNode* prev = nullptr;

        if(cnt-n == 0)
        {
            head = head->next;
            delete temp;
            return head;
        }
        
        while(temp)
        {
            cnt--;
            if(cnt-n+1 == 0)
            {
                prev->next = prev->next->next;
                delete temp;
                break;
            }
            prev = temp;
            temp =temp->next;
        }
        return head;
    }
};