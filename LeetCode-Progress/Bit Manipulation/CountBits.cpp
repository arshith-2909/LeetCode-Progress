class Solution {
public:
    int binary(int n)
    {
        int num = n, res = 0;
        while(num)
        {
            int ld = num%2;
            if(ld == 1)
                res++;
            num /= 2;
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++)
        {
            ans.push_back(binary(i));
        }
        return ans;
    }
};