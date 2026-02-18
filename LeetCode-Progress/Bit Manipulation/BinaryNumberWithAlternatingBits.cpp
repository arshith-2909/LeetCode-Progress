class Solution {
public:
    bool hasAlternatingBits(int n) {
        int count, num = n;
        while(num > 0)
        {
            int ld = num % 2;
            if(num != n && count == ld)
            {
                return false;
            }
            count = ld;
            num /= 2;
        }
        return true;
    }
};