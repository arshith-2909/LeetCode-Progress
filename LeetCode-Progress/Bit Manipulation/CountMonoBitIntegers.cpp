class Solution {
public:
    bool monoBit(int n)
    {
        int num = n;
        int ld = num % 2;
        while(num)
        {
            int rem = num % 2;
            if(rem != ld)
                return false;
            num /= 2;
        }
        return true;
    }
    int countMonobit(int n) {
        int cnt = 0;
        for(int i = 0; i <= n; i++)
        {
            if(monoBit(i))
                cnt++;
        }
        return cnt;
    }
};