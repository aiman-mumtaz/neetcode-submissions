class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int i=0,j=n.size()-1;
        while(i<j){
            if(n[i] +n[j] == target){
                return {n[i],n[j]};
            }else if(n[i] + n[j] < target){
                i++;
            }else{
                j--;
            }
        }
        return {};
    }
};
