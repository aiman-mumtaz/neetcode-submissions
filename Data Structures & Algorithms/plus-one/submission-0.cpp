class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string s;
        for(auto x:digits){
            char ch = x + '0';
            s += ch;
        }
        int tmp = stoi(s) + 1;
        digits = {};
        while(tmp){
            int x = tmp%10;
            digits.push_back(x);
            tmp = tmp/10;
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};