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
            if (!mp[nums[i]-1]>0){
                //this is te startt of the sequence.
                int j=nums[i]+1;
                while(mp[j]>0){
                    j++;
                    cnt++;
                }

                maxi=max(cnt,maxi);
                cnt=1;
            }
        }

        return maxi;
    }
};
