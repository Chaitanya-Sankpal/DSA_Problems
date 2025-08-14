class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        
        int ans = 0;
        unordered_map<string, int> mp;

        for(auto i : words){

            string r = i;

            reverse(r.begin(), r.end());

            if(mp[r] > 0){

                ans++;
                mp[r]--;
            }
            else{

                mp[i]++;
            }
        }

        return ans;
    }
};