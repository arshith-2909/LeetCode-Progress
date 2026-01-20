class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0, c= 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                v++;
            else if((s[i] >= 48 && s[i] <=57) || s[i] == ' ')
            {}
            else
                c++;
        }
        if(c != 0)
            return v/c;
        return 0;
    }
};