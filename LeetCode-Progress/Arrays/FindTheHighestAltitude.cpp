class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> points;
        points.push_back(0);
        int diff = 0;
        for(int i = 0; i < gain.size(); i++)
        {
            diff += gain[i];
            points.push_back(diff);
        }
        int ans = INT_MIN;
        for(int i = 0; i < points.size(); i++)
        {
            ans = max(ans, points[i]);
        }
        return ans;
    }
};