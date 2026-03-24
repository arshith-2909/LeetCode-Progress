class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";
        for(auto it: words)
        {
            int sum = 0;
            for(auto ch: it)
            {
                sum += weights[ch-'a'];
            }
            sum %= 26;
            res += ('a' + (25-sum));
        }
        return res;
    }
};