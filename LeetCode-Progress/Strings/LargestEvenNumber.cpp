class Solution {
public:
    string largestEven(string s) {
        int n = s.size();
        for(int i = n-1; i >= 0; i--)
        {
            int ld = s[i]%2;
            if(ld)
                s.erase(i, 1);
            else
                return s;
        }
        return s;
    }
};