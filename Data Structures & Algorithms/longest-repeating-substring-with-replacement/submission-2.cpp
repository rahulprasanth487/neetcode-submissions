class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;

        int n=s.size();
        for(int i=0;i<n;++i){
            unordered_map<char,int>mp;
            int maxCharcount = 0;
            for(int j=i;j<n;++j){
                mp[s[j]]++;
                maxCharcount = max(maxCharcount, mp[s[j]]);
                if ((j-i+1)-maxCharcount <=k ){
                    res=max(res,j-i+1);
                }
            }
        }

        return res;
    }
};
