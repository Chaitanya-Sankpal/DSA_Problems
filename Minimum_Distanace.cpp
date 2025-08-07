class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {

        vector<int> result;

        unordered_map<int, int> prefix, suffix;

        for(auto i : nums){

            prefix[i]++;
        }

        for(auto i : nums){

            suffix[i]++;

            prefix[i]--;

            if(prefix[i] == 0){

                prefix.erase(i);
            }

            result.push_back(suffix.size() - prefix.size());
        }

        return result;
        
    }
};