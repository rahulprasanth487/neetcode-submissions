class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        sort(nums.begin(), nums.end());

        int n=nums.size();

        for (int i=0;i<n;++i){
            unordered_map<int,int>mp;
            for (int j=i+1;j<n;++j){
                int target = -(nums[i]+nums[j]);
                if (mp.count(target)){
                    st.insert({nums[i], nums[j], target});
                }
                mp[nums[j]]++;
            }
        }

        return vector<vector<int>>(st.begin(), st.end());
    }
};
