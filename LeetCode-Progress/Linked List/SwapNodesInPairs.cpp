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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* mover = dummyNode;
        ListNode* temp = head;
        stack<ListNode*> st;
        while(temp)
        {
            st.push(temp);
            temp = temp->next;
            if(st.size()==2)
            {
                while(!st.empty())
                {
                    mover->next = st.top();
                    mover = mover->next;
                    st.pop();
                }
            }
        }
        if(!st.empty())
        {
            mover->next = st.top();
            st.pop();
            mover = mover->next;
        }
        mover->next = nullptr;
        return dummyNode->next;
    }
};