class Solution {
public:
    bool remainder(int n)
    {
        int num = n;
        while(num > 0)
        {
            int ld = num % 10;
            if(ld == 0)
                return false;
            else if(n % ld != 0)
                return false;
            num /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right; i++)
        {
            if(remainder(i))
                ans.push_back(i);
        }
        return ans;
    }
};