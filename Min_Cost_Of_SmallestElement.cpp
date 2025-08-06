class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<double> averages;

        int i = 0, j = nums.size() - 1;

        while(i < j){

            double ans = (nums[i] + nums[j]) / 2.0;
            averages.push_back(ans);
            i++;
            j--;
        }

        double mini = *min_element(averages.begin(), averages.end());
        
        return mini;

        
        
    }
};