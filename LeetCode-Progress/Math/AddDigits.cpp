class Solution {
public:
    int sumOfDigits(int num)
    {
        int n = num, sum = 0;
        while(n > 0)
        {
            int ld = n % 10;
            sum += ld;
            n /= 10;
        }
        return sum;
    }
    int addDigits(int num) {
        int n = num;
        while(n >= 10)
        {
            n = sumOfDigits(n);
        }
        return n;
    }
};