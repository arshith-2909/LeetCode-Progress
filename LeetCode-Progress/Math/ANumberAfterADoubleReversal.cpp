class Solution {
public:
    int rev(int n)
    {
        int rev = 0;
        while(n > 0)
        {
            int ld = n % 10;
            rev = rev * 10 + ld;
            n /= 10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int first = rev(num);
        int second = rev(first);
        return num == second;
    }
};