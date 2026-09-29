class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();

        int result =0;

        for (int i=0;i<n;++i){
            for (int j=i+1; j<n; ++j){
                int size = min(heights[i],heights[j])*(j-i);
                result = max(result, size);
            }
        }

        return result;
    }
};
