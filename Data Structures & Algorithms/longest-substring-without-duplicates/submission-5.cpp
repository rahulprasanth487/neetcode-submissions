class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 1;
        int n=s.size();

        if (n==0) return 0;

        // for (int i=0;i<n;++i){
        //     unordered_map<char,int> mp;
        //     for (int j=i;j<n;++j){
        //         if (mp[s[j]]>0) break;
        //         mp[s[j]]++;
        //         res=max(res,j-i+1);
        //     }
        // }

        unordered_map<char,int> mp;
        int l_window=0;
        for (int r=0;r<n;++r){
            while(mp[s[r]]>0){
                mp.erase(s[l_window]);
                l_window++;
                
            }
            mp[s[r]]++;
            res = max(res, r-l_window+1);
        }

        return res;

    }
};
