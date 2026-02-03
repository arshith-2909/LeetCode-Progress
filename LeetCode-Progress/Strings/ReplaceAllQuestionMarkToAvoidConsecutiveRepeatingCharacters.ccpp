#include<bits/stdc++.h>
class Solution {
public:
    char assign(char ch1, char ch2)
    {
        char res = ' ';
        for(int i = 0; i < 26; i++)
        {
            if(97 + i != ch1 && 97 + i != ch2)
            {
                res = 97 + i;
                break;
            }
        }
        return res;
    }
    string modifyString(string s) {
        if(s.size() == 1)
        {
            s[0] = assign(' ',' ');
            return s;
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '?' && i == 0)
            {
                s[i] = assign(s[i+1],' ');
            }
            else if(s[i] == '?' && i == s.size()-1)
            {
                s[i] = assign(s[i-1],' ');
            }
            else if(s[i] == '?')
            {
                s[i] = assign(s[i-1], s[i+1]);
            }
        }
        return s;
    }
};