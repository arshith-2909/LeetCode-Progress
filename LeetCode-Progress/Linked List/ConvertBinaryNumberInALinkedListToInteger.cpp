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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        vector<int> s;
        while(temp)
        {
            s.push_back(temp->val);
            temp = temp->next;
        }
        int r = s.size()-1;
        int ans = 0, power = 0;
        while(r >= 0)
        {
            ans += (s[r]) * pow(2,power);
            power++;
            r--;
        }
        return ans;
    }
};