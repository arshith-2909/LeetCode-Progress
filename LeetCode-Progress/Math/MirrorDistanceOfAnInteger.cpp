class Solution {
public:
    int mirrorDistance(int n) {
        int num = n, rev = 0;
        while(num > 0)
        {
            int ld = num % 10;
            rev = rev * 10 + ld;
            num /= 10;
        }
        return abs(rev - n);
    }
};