class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string word;
        vector<string> words;
        stringstream ss(s);
        while(ss >> word)
        {
            words.push_back(word);
        }
        if(words.size() != pattern.size())
            return false;
        map<char, string> mpp;
        for(int i = 0; i < pattern.size(); i++)
        {
            if(mpp.find(pattern[i]) != mpp.end())
            {
                if(words[i] != mpp[pattern[i]])
                    return false;
            }
            for(auto it : mpp)
            {
                if(it.second == words[i] && it.first != pattern[i])
                    return false;
            }
            mpp[pattern[i]] = words[i];
        }
        return true;
    }
};