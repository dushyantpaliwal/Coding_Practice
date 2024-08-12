class Solution {
public:
    int LIS(int i, vector<int>& dp, vector<int>& nums, int k) {
        if (dp[i] != -1) return dp[i];  // Return already computed result

        int ans = 1;  // The element itself is the smallest LIS
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[i]) {
                ans = max(ans, LIS(j, dp, nums, k) + 1);
            }
        }
        return dp[i] = ans;  // Store the result in dp array
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;  // Edge case: empty array

        vector<int> dp(n, -1);  // Initialize dp array with -1
        int ans = 1;
        for (int i = 0; i < n; i++) {
            ans = max(ans, LIS(i, dp, nums, n));
        }
        return ans;
    }
};
