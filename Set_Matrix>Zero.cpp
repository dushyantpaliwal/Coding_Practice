void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_map<int, int>hm1;
         unordered_map<int, int>hm2;
        for(int i = 0; i < n; i++){
            for(int j =0; j < m; j++){
                if(matrix[i][j] == 0){
                    hm1[i] = -1;
                    hm2[j] = -1;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j =0; j < m; j++){
                if(hm1 [i] == -1) {
                   matrix[i][j] =0; 
                }
                if(hm2[j] == -1){
                    matrix[i][j] = 0;
                }
            }
        }
    }

};
