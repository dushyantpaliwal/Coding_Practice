int minDistance(string word1, string word2) {
       int n = word1.size();
       int m = word2.size();
       if(n==0) return m;
       if(m==0) return n;
    //    vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
    vector<int>curr(m+1, 0);
    vector<int>next(m+1, 0);
    for(int i = 0; i < m; i++){
       next[i]= m-i;
    }
      
        // for(int j =0; j < m; j++)dp[n][j] = m-j;
       for(int i = n-1; i >=0; i--){
        for(int j = m-1; j >=0; j--){
            curr[m] = n-i;
            if(word1[i] == word2[j]){
        curr[j] = next[j+1];
     }
       else{
        curr[j] = 1+min(next[j+1], min(next[j],curr[j+1]));
     
       }
        }
        next = curr;
        
       }
       return next[0];
    }
