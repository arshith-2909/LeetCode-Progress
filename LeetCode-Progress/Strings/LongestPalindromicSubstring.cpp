class Solution {
public:
    int expandFromCenter(string s, int left, int right)
    {
        int n = s.size();
        while(left >= 0 && right < n && s[left] == s[right])
        {
            left--;
            right++;
        }
        return (right - left - 1);
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0, end = 0;
        for(int center = 0; center < n; center++)
        {
            int oddLength = expandFromCenter(s, center, center);
            int evenLength = expandFromCenter(s, center, center + 1);
            int maxLen = max(oddLength, evenLength);
            if(maxLen > (end - start + 1))
            {
                start = center - (maxLen-1)/2;
                end = center + (maxLen/2);
            }
        }
        return s.substr(start, (end-start+1));
    }
};