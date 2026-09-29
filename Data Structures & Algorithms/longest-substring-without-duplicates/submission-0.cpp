class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int n=s.size();

        for (int i=0;i<n;++i){
            unordered_map<char,int> mp;
            for (int j=i;j<n;++j){
                if (mp[s[j]]>0) break;
                mp[s[j]]++;
                res=max(res,j-i+1);
            }
        }

        return res;
    }
};
