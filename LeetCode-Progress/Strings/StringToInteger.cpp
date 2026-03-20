class Solution {
public:
    int helper(string s, int i, int sign, long long res)
    {
        if(i >= s.size() || !isdigit(s[i]))
            return (sign * res);
        res = res * 10 + (s[i]-'0');
        if((sign * res) < INT_MIN) return INT_MIN;
        if((sign * res) > INT_MAX) return INT_MAX;
        return helper(s, i+1, sign, res);
    }
    int myAtoi(string s) {
        int i = 0;
        while(i < s.size() && s[i] == ' ') i++;

        int sign = 1;
        if(i < s.size() && (s[i] == '-' || s[i] == '+'))
        {
            sign = s[i] == '-' ? -1: 1;
            i++;
        }
        return helper(s, i, sign, 0);
    }
};