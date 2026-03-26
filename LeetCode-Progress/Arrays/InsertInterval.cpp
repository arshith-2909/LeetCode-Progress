class Solution {
public:
    int insertIndex(vector<vector<int>>& arr, vector<int>& newArr)
    {
        int low = 0, high = arr.size()-1;
        int ind = arr.size();
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(arr[mid][0] < newArr[0])
            {
                ind = mid+1;
                low = mid + 1;
            }
            else
            {
                ind = mid;
                high = mid - 1;
            }
        }
        return ind;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int index = insertIndex(intervals, newInterval);
        intervals.insert(intervals.begin()+index, newInterval);
        for(auto it:intervals)
        {
            cout<<"["<<it[0]<<","<<it[1]<<"]"<<" ";
        }
        vector<vector<int>> ans;
        for(int i = 0; i < intervals.size(); i++)
        {
            if(ans.empty() || ans.back()[1] < intervals[i][0])
                ans.push_back(intervals[i]);
            else
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
        return ans;
    }
};