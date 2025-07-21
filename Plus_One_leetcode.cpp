class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        for(int i = n - 1; i >= 0; i--){

            if(digits[i] < 9){

                digits[i]++;
                return digits;
                //If last digit is not 9 then digits will return after this if condition
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        //Above line is for only examples like 9, 99, 999, 189, 199, etc.
        return digits;
        
    }
};