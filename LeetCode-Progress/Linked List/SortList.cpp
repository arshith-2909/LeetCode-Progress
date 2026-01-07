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
    ListNode* findMiddle(ListNode* head)
    {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* slow = head;
        ListNode* fast = head;
        fast = fast->next;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge2LL(ListNode* first, ListNode* second)
    {
        ListNode* t1 = first;
        ListNode* t2 = second;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;
        while(t1 && t2)
        {
            if(t1->val < t2->val)
            {
                temp->next = t1;
                t1 = t1->next;
                temp = temp->next;
            }
            else
            {
                temp->next = t2;
                t2 = t2->next;
                temp = temp->next;
            }
        }
        if(t1) 
            temp->next = t1;
        else
            temp->next = t2;

        return dummyNode->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* middle = findMiddle(head);
        ListNode* first = head;
        ListNode* second = middle->next;
        middle->next = nullptr;
        first = sortList(first);
        second = sortList(second);
        return merge2LL(first, second);
    }
};