class Solution {
public:
    int scoreOfString(string s) {
        int i = 0, j = 1, sum = 0;
        while( j < s.size())
        {
            sum += abs(s[i]-s[j]);
            i++;
            j++;
        }
        return sum;
    }
};