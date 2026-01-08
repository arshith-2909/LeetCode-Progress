class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        while(s[i] == ' ')
            i--;
        int ans = 0;
        while(i >= 0 && s[i] != ' ') 
        // i == 0 is used at the begining because if the string contains a single word or does'nt 
        // have a gap then it might compare "s[-1] != ' '" which is undefined behaviour
        {
            ans++;
            i--;
        }
        return ans;
    }
};