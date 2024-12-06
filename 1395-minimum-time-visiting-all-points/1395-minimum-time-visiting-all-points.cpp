class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for(int i = 1; i < points.size(); i++){
            int temp1 = points[i][0] - points[i-1][0];
            int temp2 = points[i][1] - points[i-1][1];
            int val = max(abs(temp1), abs(temp2));
            ans += val;
        }
        return ans;
    }
};