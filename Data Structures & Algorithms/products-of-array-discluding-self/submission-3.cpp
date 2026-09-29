class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;

        float tot_prod = 1;
        unordered_map<int,int> zero_counter;
        bool has_zero= false;
        int zero_cout = 0;

        for (int i=0; i<nums.size(); ++i)
        {
            if (nums[i] != 0){
                tot_prod*=nums[i];
                zero_counter[i]=0;
            } else
            {
                zero_cout++;
                has_zero = true;
                zero_counter[i]=1;
            }
        }

        for (int i=0;i<nums.size();++i)
        {
            if (zero_cout>1) {
                ans.push_back(0);
            }
            else if(has_zero && zero_counter[i]==0){
                ans.push_back(0);
            }
            else if (has_zero && zero_counter[i]==1)
            {
                ans.push_back(tot_prod);
            }
            else
            {
                ans.push_back(tot_prod/nums[i]);
            }
        }

        return ans;
    }
};
