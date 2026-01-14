class Solution {
public:
    bool isHappy(int n) {
        int num = n;
        while(num >= 5)
        {
            double sum = 0;
            while(num > 0)
            {
                int l = num % 10;
                sum = l*l + sum;
                num /= 10;
            }
            num = sum;
        }
        return num == 1;
    }
};