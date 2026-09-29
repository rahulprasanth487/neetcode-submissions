class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mp;
        
        for (auto str:strs){
            vector<int>arr(26);
            for (int i=0;i<str.size();++i){
                arr[str[i]-'a']++;
            }
            mp[arr].push_back(str);
        }

        vector<vector<string>> res;
        for (auto m:mp){
            res.push_back(m.second);
        }

        return res;
    }
};
