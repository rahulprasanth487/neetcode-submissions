class Solution {
public:

    void merge(vector<int>&nums, int low, int mid, int high){
        vector<int>leftArr, rightArr;
        for (int i=low; i<=high;++i){
            if (i<= mid) {
                leftArr.push_back(nums[i]);
                continue;
            }
            rightArr.push_back(nums[i]);
        }

        int i=0,j=0, k = low;

        while(i<leftArr.size() && j<rightArr.size()){
            if(leftArr[i]<rightArr[j]){
                nums[k] = leftArr[i];
                i++;
                k++;
            }
            else{
                nums[k] = rightArr[j];
                k++;
                j++;
            }
        }

        while(i<leftArr.size()){
            nums[k] = leftArr[i];
            i++;
            k++;
        }

        while(j<rightArr.size()){
            nums[k] = rightArr[j];
            j++;
            k++;
        }
    }

    void mergeSort(vector<int>&nums, int left, int right){
        int mid = (left+right)/2;

        if(left<right){
            mergeSort(nums, left, mid);
            mergeSort(nums, mid+1, right);

            merge(nums, left, mid, right);
        }
    }
    void sortColors(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
    }
};