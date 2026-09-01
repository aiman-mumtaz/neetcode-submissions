class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<pair<int,int>> freq;
        for(auto x: nums){
            mp[x]++;
        }
        for(auto x: mp){
            freq.push_back(make_pair(x.second,x.first));
        }
        sort(freq.begin(),freq.end());

        int n = freq.size();
        if(n==1){
            return {freq[0].second};
        }
         
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(freq[n-i-1].second);
        }
        return ans;

    }
};
