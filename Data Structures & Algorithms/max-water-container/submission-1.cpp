class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();

        int result =0;

        int l=0, r=n-1;
        while(l<r){
            int store = min(nums[l],nums[r])*(r-l);
            result = max(store, result);
            if(nums[l]<nums[r]) l++;
            else r--;
        }

        return result;
    }
};
