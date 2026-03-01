class Solution {
public:
    string truncateSentence(string s, int k) {
        int sp = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(sp == k)
            {
                s.erase(i-1,s.size()-i+1);
                return s;
            }
            if(s[i] == ' ')
                sp++;
        }
        return s;
    }
};