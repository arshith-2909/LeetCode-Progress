class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> mpp;
        int ch = 0;
        for(int i = 0; i < key.size(); i++)
        {
            if(key[i] == ' ')
                continue;
            if(mpp.find(key[i]) == mpp.end())
            {
                mpp[key[i]] = ch + 97;
                ch++;
            }
        }
        string ans;
        for(int i = 0; i < message.size(); i++)
        {
            if(message[i] == ' ')
                ans.push_back(message[i]);
            else
            {
                ans.push_back(mpp[message[i]]);
            }
        }
        return ans;
    }
};