class Solution {
public:
    int commonFactors(int a, int b) {
        int count = 0;
        int c = min(a, b);
        while(c > 0)
        {
            if(a % c == 0 && b % c == 0)
                count++;
            c--;
        }
        return count;
    }
};