class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> arr(256, -1);
        for(int i = 0; i < magazine.size(); i++)
        {
            if(arr[magazine[i]] == -1)
                arr[magazine[i]] = 0;
            arr[magazine[i]]++;
        }
        for(int i = 0; i < ransomNote.size(); i++)
        {
            arr[ransomNote[i]]--;
        }
        for(int i = 0; i < ransomNote.size(); i++)
        {
            if(arr[ransomNote[i]] < 0)
                return false;
        }
        return true;
    }
};