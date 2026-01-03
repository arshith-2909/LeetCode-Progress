class Solution {
public:
    int maxDepth(string s) {
        int maxCount = 0, count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                count++;
                maxCount = max(maxCount, count);
            }
            else if(s[i] == ')')
                count--;
        }
        return maxCount;
    }
};