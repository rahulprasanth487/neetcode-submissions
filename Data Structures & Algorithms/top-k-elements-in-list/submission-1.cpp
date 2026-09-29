class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> freq(nums.size()+1);
        vector<int> ans;

        for (int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }

        for (auto cnt:count){
            freq[cnt.second].push_back(cnt.first);
        }


        for (int i=freq.size()-1;i>0; --i){
            if(k==0) return ans;
            for (int j : freq[i]){
                ans.push_back(j);
                k--;
            }
        }

        return ans;

        
    }
};
