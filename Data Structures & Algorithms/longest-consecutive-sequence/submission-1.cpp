class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
        }

        int cnt=1;
        int maxi= 0;
        for (int i=0; i<nums.size();i++){
            int j=nums[i]+1;
            while (mp[j]>0) {
                cnt++;
                j++;
            }

            maxi=max(maxi,cnt);
            cnt=1;
        }

        return maxi;
    }
};
