class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b) {
            double distA = sqrt((a[0] - 0) * (a[0] - 0) + (a[1] - 0) * (a[1] - 0));
            double distB = sqrt((b[0] - 0) * (b[0] - 0) + (b[1] - 0) * (b[1] - 0));
            return distA < distB;
        });

        // Take first k points
        return vector<vector<int>>(points.begin(), points.begin() + k);
        
    }
};