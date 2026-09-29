class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2){
            return n;
        }
        vector<int> a = {1,2};
        for(int i=2;i<n;i++){
            a.push_back(a[i-2]+a[i-1]);
        }
        return n;
    }
};
