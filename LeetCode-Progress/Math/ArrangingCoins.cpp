class Solution {
public:
    int arrangeCoins(int n) {
        int row = 0, count = 1;
        while(n > 0)
        {
            if(n < count)
                return row;
            n = n - count;
            count++;
            row++;
        }
        return row;
    }
};