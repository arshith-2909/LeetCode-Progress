class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, maxLen = 0;
        vector<int> hash(256,-1);
        while(r < s.size())
        {
            if(hash[s[r]] != -1)
            {
                l = max(hash[s[r]]+1, l);
            }
            int len = r - l + 1;
            maxLen = max(maxLen, len);
            hash[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};