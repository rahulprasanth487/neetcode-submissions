class Solution {
   public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> leftArr, rightArr;

        for (int i = low; i <= high; ++i) {
            if (i <= mid) {
                leftArr.push_back(nums[i]);
                continue;
            }
            rightArr.push_back(nums[i]);
        }

        int k = low;
        int l = 0, r = 0;
        while (l < leftArr.size() && r < rightArr.size()) {
            if (leftArr[l] < rightArr[r]) {
                nums[k] = leftArr[l];
                k++;
                l++;
            } else {
                nums[k] = rightArr[r];
                k++;
                r++;
            }
        }

        while (l < leftArr.size()) {
            nums[k] = leftArr[l];
            l++;
            k++;
        }

        while (r < rightArr.size()) {
            nums[k] = rightArr[r];
            k++;
            r++;
        }
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            mergeSort(nums, low, mid);
            mergeSort(nums, mid + 1, high);

            merge(nums, low, mid, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        mergeSort(nums, left, right);

        return nums;
    }
};