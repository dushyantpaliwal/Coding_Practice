class Solution {
public:
  int ans(vector<vector<int>>& grid, int i, int j,  vector<vector<int>>&dp){
    if(i <= 0){
        int p =0;
     while(j>=0){
       p+= grid[0][j];
       j--;
     }
     return p;
    }
    if(j<= 0){
          int p =0;
     while(i>=0){
       p+= grid[i][0];
       i--;
     }
     return p;
    }
    if(dp[i][j] != -1)return dp[i][j];
    return dp[i][j] =  grid[i][j]+ min(ans(grid, i-1, j,dp), ans(grid,i,j-1,dp));
    
  }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m  = grid[0].size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return ans(grid, n-1,m-1, dp);
    }
};
