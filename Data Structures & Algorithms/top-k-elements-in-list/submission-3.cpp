class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>countMap;
        for (auto i:nums) countMap[i]++;
        

        vector<vector<int>>arr(nums.size());

        for(auto m:countMap){
            arr[m.second-1].push_back(m.first);
        }

        vector<int>ans;


        for (int i=nums.size()-1;i>=0;--i){
            if(k==0) return ans;
            for (int j:arr[i]){
                ans.push_back(j);
                k--;
            }
        }

        return ans;
    }
};
