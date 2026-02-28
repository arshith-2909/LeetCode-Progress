class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int, int> mp;
        for(auto it: nums)
        {
            mp[it]++;
        }
        for(auto it: mp)
        {
            for(auto iter: mp)
            {
                if(iter.first > it.first)
                {
                    if(iter.second != it.second)
                        return {it.first, iter.first};
                }
            }
        }
        return {-1, -1};
    }
};