class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> s(sentence.begin(), sentence.end());
        char alphabet = 97;
        for(int i = 0; i < 26; i++)
        {
            if(!s.count(alphabet + i))
                return false;
        }
        return true;
    }
};