class Solution {
public:

    struct compareSecond {
        bool operator()(const pair<int,int>& a, const pair<int,int>&b){
        return b.second>a.second;
        }
    };


    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>, vector<pair<int,int>>, compareSecond>pq;
        vector<int> ans;

        for (int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for (auto i:mp){
            pq.push({i.first,i.second});
        }

        while(!pq.empty() && k>0){
            pair<int,int> top = pq.top();
            ans.push_back(top.first);
            pq.pop();
            k--;
        }

        return ans;

        
    }
};
