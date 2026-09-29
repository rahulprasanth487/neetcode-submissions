class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;

        for (int i=0;i<height.size();++i){
            int left = height[i];
            int right = height[i];

            for (int j=0;j<i;++j) left = max(left, height[j]);
            for (int k=i+1;k<height.size();k++) right = max(right, height[k]);
            
            res+= min(left,right)-height[i];
        }

        return res;
    }
};
