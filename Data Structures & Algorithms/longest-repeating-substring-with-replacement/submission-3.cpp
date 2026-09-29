class Solution {
public:
    int characterReplacement(string s, int k) {
        
        // if (s.size() == 0) return 0;

        int l=0, n=s.size();
        // for(int i=0;i<n;++i){
        //     unordered_map<char,int>mp;
        //     int maxCharcount = 0;
        //     for(int j=i;j<n;++j){
        //         mp[s[j]]++;
        //         maxCharcount = max(maxCharcount, mp[s[j]]);
        //         if ((j-i+1)-maxCharcount <=k ){
        //             res=max(res,j-i+1);
        //         }
        //     }
        // }

        unordered_map<char,int> mp;

        int maxi_char = 0, res = 0;

        for (int r=0;r<s.size();r++){

            mp[s[r]]++;
            maxi_char = max(maxi_char, mp[s[r]]);

            
            while ((r-l+1)-maxi_char > k ) {
                mp[s[l]]--;
                l++;
            }
            
            res = max(res, r-l+1);
        }

        return res;
    }
};
