class Solution {
public:
    static bool comparator(vector<int> a, vector<int> b)
    {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comparator);
        int cnt = 1, freetime = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++)
        {
            if(intervals[i][0] >= freetime)
            {
                cnt += 1;
                freetime = intervals[i][1];
            }
        }
        return (intervals.size() - cnt);
    }
};