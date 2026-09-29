class Solution {
public:

    string encode(vector<string>& strs) {
        string en = "";
        for(auto i:strs){
            en+=i+"-/";
        }
        return en;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string tmp="";
        int i=0,j=0;

        while(i<s.size()){
            if(s[i]=='-'){
                if(s[i+1]=='/'){
                    ans.push_back(tmp);
                    tmp="";
                    i+=2;
                    continue;
                }
            }
            tmp+=s[i];
            i++;
        }

        return ans;
    }
};
