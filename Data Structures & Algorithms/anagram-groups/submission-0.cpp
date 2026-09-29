class Solution {
public:

    vector<int> chatMapped(string str1){
        vector<int>arr (26,0);

        for (int i=0; i<str1.size(); i++){
            arr[str1[i]-'a']++;
        }

        return arr;
    }


    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map< vector<int>, vector<string> > mp;
        vector<vector<string>> ans;
        

        for (int i=0; i<strs.size(); i++){
            vector<int> charMap = chatMapped(strs[i]);
            mp[charMap].push_back(strs[i]);
        }

        for (auto m:mp){
            ans.push_back(m.second);
        }

        return ans;
    }
};
