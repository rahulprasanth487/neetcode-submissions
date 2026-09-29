class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0); // Initialize with 0
        stack<int> stk;

        for (int i = temperatures.size() - 1; i >= 0; --i) {
            // FIX 1: Keep checking !stk.empty() DURING the loop execution
            while (!stk.empty() && temperatures[stk.top()] <= temperatures[i]) {
                stk.pop();
            }

            // FIX 2: Check if any warmer day is left before calling .top()
            if (!stk.empty()) {
                res[i] = stk.top() - i;
            } else {
                res[i] = 0; // No warmer day found
            }

            stk.push(i);
        }

        return res;
    }
};
