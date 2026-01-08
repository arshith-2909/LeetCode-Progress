class Solution {
public:
    bool detectCapitalUse(string word) {
        bool allupper = true;
        for(auto c : word)
        {
            if(!isupper(c))
            {
                allupper = false;
                break;
            }
        }
        bool alllower = true;
        for(auto c : word)
        {
            if(!islower(c))
            {
                alllower = false;
                break;
            }
        }
        bool firstcapital = true;
        for(int i = 1; i < word.size(); i++)
        {
            if(!isupper(word[0]) || !islower(word[i]))
            {
                firstcapital = false;
                break;
            }
        }
        if(allupper || alllower || firstcapital)
            return true;
        return false;
    }
};