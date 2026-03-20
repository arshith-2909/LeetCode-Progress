class Solution {
private:
    static bool comparator(pair<int, char> p1, pair<int, char> p2)
    {
        if(p1.first > p2.first) return true;
        if(p1.first < p2.first) return false;
        return p1.second < p2.second;
    }
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char ch : s)
        {
            freq[ch]++;
        }
        vector<pair<int, char>> storage;
        for(auto it: freq)
        {
            storage.push_back({it.second, it.first});
        }
        sort(storage.begin(), storage.end(), comparator);
        string ans = "";
        for(auto it: storage)
        {
            ans.append(it.first, it.second);
        }
        return ans;
    }
};