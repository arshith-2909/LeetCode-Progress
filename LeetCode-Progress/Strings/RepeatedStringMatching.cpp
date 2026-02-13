class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        if(b.size() == 0)
            return 0;
        string t = a;
        int count = 1;
        while(t.size() < b.size())
        {
            t += a;
            count++;
        }
        if(t.find(b) != string::npos)
            return count;
        t += a;
        count++;
        if(t.find(b) != string::npos)
            return count;
        return -1;
    }
};