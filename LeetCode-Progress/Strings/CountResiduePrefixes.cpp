class Solution {
public:
    int residuePrefixes(string s) {
        int count = 0;
        map<char, int> mpp;
        for(char ch : s)
        {
            mpp[ch]++;
            int sum = 0;
            for(auto it:mpp)
            {
                sum += it.second;
            }
            if(mpp.size() == sum % 3)
                count++;
        }
        return count;
    }
};