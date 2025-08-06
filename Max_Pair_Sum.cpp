class Solution {
public:
    int digit(int n){

        int maxi = 0;

        while(n > 0){

            maxi = max(maxi, n % 10);
            n /= 10;
        }

        return maxi;
    }
    int maxSum(vector<int>& nums) {

        int n = nums.size();

        int ans = -1;

        for(int i = 0; i < n; i++){

            for(int j = i + 1; j < n; j++){

                int a = nums[i], b = nums[j];

                if(digit(a) == digit(b)){

                    ans = max(a + b, ans);
                }
            }
        }

        return ans;

        
    }
};