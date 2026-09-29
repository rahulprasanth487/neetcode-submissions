class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count_val=0;
        // vector<int>temp;
        // for (int i=0;i<nums.size();++i){
        //     if (nums[i]==val){
        //         count_val++;
        //     }else {
        //         temp.push_back(nums[i]);
        //     }
        // }

        // int rem = nums.size()-count_val;
        // nums=temp;
        // return rem;

        //two pointers
        int k=0;

        for (int i=0;i<nums.size();++i){
            if(nums[i]==val){
                count_val++;
                continue;
            }
            nums[k]=nums[i];
            k++;
        }

        return nums.size()-count_val;
    }
};