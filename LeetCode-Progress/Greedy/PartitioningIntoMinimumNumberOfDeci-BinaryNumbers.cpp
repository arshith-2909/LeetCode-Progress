class Solution {
public:
    int minPartitions(string n) {
        int sum = 0;
        for(auto it:n)
        {
            sum = max(sum, it-48);
        }
        return sum;
    }
};