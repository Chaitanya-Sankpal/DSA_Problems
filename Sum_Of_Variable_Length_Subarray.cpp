class Solution {
public:
    int subarraySum(vector<int>& nums) {

        int n = nums.size();
        int sum = 0;

        for(int i = 0; i < n; i++){

            int maxi = 0;
            maxi = max(0, i - nums[i]);

            for(int j = maxi; j <= i; j++){

                sum += nums[j];
            }
        }

        return sum;
        
    }
};