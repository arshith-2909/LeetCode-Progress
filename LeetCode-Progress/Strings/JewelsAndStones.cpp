class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        for(auto it: stones)
        {
            if(jewels.find(it) != string::npos)
                cnt++;
        }
        return cnt;
    }
};