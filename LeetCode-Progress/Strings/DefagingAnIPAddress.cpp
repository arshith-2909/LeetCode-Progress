class Solution {
public:
    string defangIPaddr(string a) {
        string ans =  "";
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] == '.')
            {
                ans += "[.]";
                continue;
            }
            ans += a[i];
        }
        return ans;
    }
};