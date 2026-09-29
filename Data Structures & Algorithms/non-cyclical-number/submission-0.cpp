class Solution {
public:
    int squareSum(int n){
        int r=0,s=0;
        while(n){
            r = n%10;
            n/=10;
            s+=r*r;
        }
        return s;
    }
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        set<int> s;
        if(s.find(squareSum(n)) != s.end()){
            return false;
        }
        return true;
    }
};
