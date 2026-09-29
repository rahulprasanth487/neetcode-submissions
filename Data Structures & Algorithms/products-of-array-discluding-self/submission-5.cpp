class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero_count=0;
        vector<int> ans(nums.size());

        int mult = 1;

        for (auto i:nums){
            if (i==0){
                zero_count++;
                continue;
            }
            mult*=i;
        }

        cout<<mult;

        if (zero_count > 1) return ans;

        for (int i=0;i<nums.size();++i){
            if (nums[i]==0){
                ans[i]=mult;
                continue;
            }

            if (zero_count==0){
            ans[i] = mult/nums[i];}
        }

        return ans;

    }
};
