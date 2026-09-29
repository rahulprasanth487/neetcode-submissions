class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        for (int i=0;i<temperatures.size();++i){
            int j=i+1;
            while(j<temperatures.size()){
                if (temperatures[j]>temperatures[i]){
                    res[i] = j-i;
                    break;
                }
                j++;
            }
        }

        return res;
    }
};
