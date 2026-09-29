class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;

        int n=height.size();

        vector<int>pre(n),suf(n);

        int leftMax=0, rightMax=0;

        for (int i=0;i<n;++i){
            pre[i] = max(height[i], leftMax);
            if (leftMax<height[i]) leftMax = height[i];
        }

        for (int j=n-1;j>=0;--j){
            suf[j] = max(height[j], rightMax);
            if (rightMax<height[j]) rightMax = height[j];                                                                                                                                                                                                                    
        }

        for (int i=0;i<n;++i){
            cout<<pre[i]<<" "<<suf[i]<<endl;
            res += min(pre[i], suf[i])- height[i];
        }


        return res;
    }
};
