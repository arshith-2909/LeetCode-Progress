class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int sum = nums1[i]+nums2[j];
                mp[sum]++;
            }
        }
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int sum2 = nums3[i]+nums4[j];
                if(mp.find(-sum2) != mp.end())
                    cnt += mp[-sum2];
            }
        }
        return cnt;
    }
};