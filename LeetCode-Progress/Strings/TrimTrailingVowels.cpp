class Solution {
public:
    string trimTrailingVowels(string s) {
        int n = s.size();
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u')
                s.pop_back();
            else
                return s;
        }
        return "";
    }
};