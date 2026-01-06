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
    ListNode* reverseLL(ListNode* head)
    {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp)
        {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newNode = reverseLL(slow->next);
        ListNode* first = head;
        ListNode* second = newNode;
        while(second)
        {
            if(first->val != second->val)
            {
                reverseLL(newNode);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverseLL(newNode);
        return true;
    }
};