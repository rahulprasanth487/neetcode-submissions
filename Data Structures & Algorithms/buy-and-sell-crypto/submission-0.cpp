class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;

        int n=prices.size();
        for (int i=0;i<n;++i){
            int maxi=prices[i];
            for (int j=i+1;j<n;++j){
                maxi = max(maxi,prices[j]);
            }
            res=max(res,maxi-prices[i]);
        }

        return res;
    }
};
