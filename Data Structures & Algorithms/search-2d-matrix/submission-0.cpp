class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0] == target){
                return true;
            }
            else if(matrix[i][0] < target){
                int s=0,e=matrix[i].size()-1;
                while(s <= e){
                    int mid = (s+e)/2;
                    if(matrix[i][mid] == target){
                        return true;
                    }else if(matrix[i][mid] < target){
                        s=mid+1;
                    }else{
                        e=mid-1;
                    }
                }
            }else{
                return false;
            }
        }
        return false;
    }
};
