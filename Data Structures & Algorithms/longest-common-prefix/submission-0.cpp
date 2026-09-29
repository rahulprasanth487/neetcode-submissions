class Solution {
public:

    string check(string a, string b){
        int i;
        for (i=0;i<min(a.size(), b.size());++i){
            if (a[i]!=b[i]) break;
        }
        return a.substr(0,i);
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for (int i=0;i<strs.size()-1;++i){
            string res = check(strs[i], strs[i+1]);
            if (res == "") return "";
            else if(ans.size()>res.size()) ans=res;
        }

        return ans;
    }
};