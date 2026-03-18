class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> ans(num1.size() + num2.size(), 0);
        for(int i = num1.size()-1; i >= 0; i--)
        {
            for(int j = num2.size()-1; j >= 0; j--)
            {
                int product = (num1[i]-'0')*(num2[j]-'0');
                int sum = ans[i+j+1] + product;
                ans[i+j+1] = sum % 10;
                ans[i+j] += sum / 10;
            }
        }
        string res = "";
        int i = 0;
        while(i < ans.size() && ans[i] == 0) i++;
        while(i < ans.size())
            res += to_string(ans[i++]);
        if(res.size() == 0)
            return "0";
        return res;
    }
};