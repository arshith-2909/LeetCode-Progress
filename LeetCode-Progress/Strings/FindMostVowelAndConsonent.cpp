class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        int maxVovel = 0, maxCons = 0;
        for(auto it:mp)
        {
            if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o' || it.first == 'u')
                maxVovel = max(it.second, maxVovel);
            else
                maxCons = max(it.second, maxCons);
        }
        return maxVovel + maxCons;
    }
};