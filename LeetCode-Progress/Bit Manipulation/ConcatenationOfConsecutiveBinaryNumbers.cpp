class Solution {
public:
    string bin(int n)
    {
        string ans = "";
        while(n > 0)
        {
            ans += n % 2 + 48;
            n /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int dec(string s)
    {
        int mod = (int)1e9+7;
        int ans = 0, pwr = 1;
        for(int i = s.size()-1; i >= 0; i--)
        {
            ans = (ans + ((s[i]-'0') * pwr))%mod;
            pwr = (pwr * 2) % mod;
        }
        return ans;
    }
    int concatenatedBinary(int n) {
        string res = "";
        for(int i = 1; i <= n; i++)
        {
            res += bin(i);
        }
        return dec(res);
    }
};