class Solution {
public:
    int smallestEvenMultiple(int n) {
        int num = n, a = 1;
        while(true)
        {
            a++;
            if(num % n == 0 && num % 2 == 0)
                return num;
            num *= a;
        }
        return -1;
    }
};