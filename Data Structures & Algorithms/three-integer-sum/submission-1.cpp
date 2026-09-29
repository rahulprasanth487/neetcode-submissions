class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(), nums.end());

        int n=nums.size();
        int i=0,j,k;

        while(i<n){
             j=i+1;
             k=n-1;
             if(i>0 && nums[i]==nums[i-1]){
                i++;
                continue;
             };
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if (sum < 0){j++;}
                else if (sum>0){k--;}
                else{
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                }
            }
            i++;
        }

        return res;
    }
};
