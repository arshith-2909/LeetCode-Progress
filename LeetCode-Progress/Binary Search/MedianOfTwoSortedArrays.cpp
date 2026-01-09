class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> ans;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size())
        {
            if(nums1[i] <= nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i < nums1.size())
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j < nums2.size())
        {
            ans.push_back(nums2[j]);
            j++;
        }
        int n = ans.size();
        double res = 0;
        if(ans.size() == 1)
            return ans[0];
        if(n % 2 == 1)
        {
            int mid = (ans.size()-1)/2;
            res = ans[mid];
            return res;
        }
        int mid = (ans.size()-1)/2;
        res = (ans[mid] + ans[mid+1])/2;;
        return res;
    }
};