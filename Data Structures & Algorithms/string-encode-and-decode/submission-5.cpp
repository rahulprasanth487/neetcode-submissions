class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for (auto str:strs){
            ans+=to_string(str.length())+"#"+str;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string temp="";
        int i=0;
        while (i<s.length()){
            int j=i;
            while (s[j]!='#'){
                j++;
            }
            int count = stoi(s.substr(i,j-i));
            i = j+1;
            j = i+count;
            ans.push_back(s.substr(i, count));
            i=j;
        }

        return ans;
    }
};
