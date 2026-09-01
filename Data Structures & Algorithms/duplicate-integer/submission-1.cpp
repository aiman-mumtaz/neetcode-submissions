class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++;
        };
        for(auto i : mp){
            if(i.second && i.second > 1){
                return true;
            }
        }
        // return st.size() != nums.size();
        return false;
    }
};