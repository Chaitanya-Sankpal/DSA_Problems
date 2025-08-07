class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {

        int n = nums.size();
        int sum = 0;

        for(int i = 0; i < n; i++){

            bool left = i - k >= 0;
            bool right = i + k < n;

            if(!left && !right){

                sum += nums[i];

            }
            else if(left && !right){

                if(nums[i] > nums[i - k]){

                    sum += nums[i];
                }
            }
            else if(!left && right){

                if(nums[i] > nums[i + k]){

                    sum += nums[i];
                }
            }
            else{

                if(nums[i] > nums[i - k] && nums[i] > nums[i + k]){

                    sum += nums[i];
                }

            }

        }

        return sum;
        
    }
};