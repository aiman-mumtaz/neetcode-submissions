class Solution {
public:

    string encode(vector<string>& strs) {
        string enc="";
        for(auto x:strs){
            enc += to_string(x.size())+ '#'+ x;
        }
        return enc;
    }

    vector<string> decode(string s) {
        string tmp="";
        vector<string> dec;
        int i=0;
        while(i<s.length()){
            string lenChar;
            int j=i;
            if(s[j]>='0' && s[j] <= '9'){
                while(s[j] != '#'){
                    lenChar += s[j];
                    j++;
                }
            }
            // cout<<stoi(lenChar)<<" ";
            // int len = stoi(lenChar);
            j=j+1;
            string str;
            int lgth = stoi(lenChar);
            while(lgth--){
                str += s[j++];
            }
            dec.push_back(str);
            i=j;
        }
        return dec;
    }
};
