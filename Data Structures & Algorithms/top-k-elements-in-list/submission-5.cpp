class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>countMap;
        for (auto i:nums) countMap[i]++;
        

        vector<vector<int>>arr(nums.size());

        for(auto& [k,v]:countMap){
            arr[v-1].push_back(k);
        }

        vector<int>ans;


        for (int i=nums.size()-1;i>=0;--i){
            for (int j:arr[i]){
                ans.push_back(j);
                if(ans.size()>=k) return ans;
            }
        }

        return ans;
    }
};
