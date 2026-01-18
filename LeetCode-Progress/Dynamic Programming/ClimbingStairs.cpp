class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3)
            return n;
        int a = 2, b = 3, c;
        for(int i = 2; i < n - 1; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};