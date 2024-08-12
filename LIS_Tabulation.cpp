
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

        vector<int> dp(n, 1);  
        int maxi = 1;
        for(int i = 1; i< n; i++){
            for(int j = 0; j < i; j++){
                if(nums[j] < nums[i]){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            maxi = max(maxi, dp[i]);
        }
        return maxi;
        
    }
};
