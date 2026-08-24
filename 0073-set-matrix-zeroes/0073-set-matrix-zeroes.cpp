class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row_n = matrix.size();
        int col_n = matrix[0].size();
        // better solution that takes two vectors one for marking rows and other for columns
        vector<int> row_t(row_n , 0);
        vector<int> col_t(col_n, 0);
        for(int i =0 ; i<row_n; i++){
            for(int j =0 ; j< col_n ; j++){
                if(matrix[i][j]==0){
                    row_t[i] =1;
                    col_t[j]=1;
                }
            }
        }
        for(int i =0 ; i<row_n; i++){
            for(int j =0 ; j< col_n ; j++){
                if(row_t[i]==1 || col_t[j] ==1){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};