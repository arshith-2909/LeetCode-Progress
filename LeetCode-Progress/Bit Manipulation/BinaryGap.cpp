class Solution {
public:
    int binaryGap(int n) {
        int cur = 0, max_dist = 0;
        int num = n;
        bool found_first_one = false;
        while(num > 0)
        {
            if(num % 2 == 1)
            {
                if(found_first_one)
                {
                    max_dist = max(max_dist, cur);
                }
                found_first_one = true;
                cur = 1;
            }
            else
            {
                if(found_first_one)
                    cur++;
            }
            num /= 2;
        }
        return max_dist;
    }
};