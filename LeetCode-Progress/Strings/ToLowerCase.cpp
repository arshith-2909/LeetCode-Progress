class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for(char ch : s)
        {
            int c = ch;
            if(c >= 65 && c <= 90)
            {
                ch = c + 32;
                ans.push_back(ch);
            }
            else
                ans.push_back(ch);
        }
        return ans;
    }
};