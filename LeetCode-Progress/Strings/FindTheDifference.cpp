class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> arr(256,0);
        for(int i = 0; i < t.size(); i++)
        {
            arr[t[i]]++;
        }
        for(int i = 0; i < s.size(); i++)
        {
            arr[s[i]]--;
        }
        char ans = ' ';
        for(int i = 0; i < 256; i++)
        {
            if(arr[i] == 1)
            {
                ans = i;
            } 
        }
        return ans;
    }
};