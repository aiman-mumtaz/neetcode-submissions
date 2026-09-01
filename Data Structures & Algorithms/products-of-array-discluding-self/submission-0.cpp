class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> preff(n,1);
        vector<int> suff(n,1);
        for(int i=1;i<n;i++){
            preff[i] = preff[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suff[i] = suff[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            nums[i] = preff[i]*suff[i];
        }
        return nums;
    }
};
