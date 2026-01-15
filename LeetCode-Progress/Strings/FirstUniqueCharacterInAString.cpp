class Solution {
public:
    int firstUniqChar(string s) {
        int index = -1;
        unordered_map<char, int> mpp;
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }
        for(auto it : mpp)
        {
            if(it.second == 1)
            {
                for(int i = 0; i < s.size(); i++)
                {
                    if(s[i] == it.first)
                    {
                        index = s.size() - 1 - i;
                        return index;
                    }
                }
            }
        }
        return index;
    }
};