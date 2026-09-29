class Solution {
public:

    string encode(vector<string>& strs) {
        string enc="";
        for(auto x:strs){
            enc += x+ '#';
        }
        cout<<enc;
        return enc;
    }

    vector<string> decode(string s) {
        if(s=="##"){
            return {"#"};
        }
        string tmp="";
        vector<string> dec;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                dec.push_back(tmp);
                tmp="";
                i++;
            }
            tmp += s[i];
        }
        return dec;
    }
};
