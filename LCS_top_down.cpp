class Solution {
public:
    int LCS(string &text1, string &text2,vector<vector<int>>&dp, int i, int j){
      if(j < 0)return 0;
      if(i<0)return 0;
      if(dp[i][j] != -1)return dp[i][j];
      if(text1[i] == text2[j]){
         return dp[i][j] = 1+LCS(text1, text2, dp,i-1, j-1);
      }
     
       return dp[i][j] = max(LCS(text1, text2,dp, i-1, j), LCS(text1, text2,dp, i, j-1));
    }


    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        if(n==0 || m==0)return 0;
        vector<vector<int>>dp(n, vector<int>(m, -1));
      return   LCS(text1,text2,dp, n-1, m-1);
        
    }
};
