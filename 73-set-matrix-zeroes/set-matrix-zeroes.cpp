class Solution {
public:
    void row(vector<vector<int>>& mat , int r , int m){
        for(int i=0 ; i<m ; i++){
            if(mat[r][i] != 0){
                mat[r][i] = '@';
            }
        }
    }
    void col(vector<vector<int>>& mat , int c , int n){
        for(int i=0 ; i<n ; i++){
            if(mat[i][c] != 0){
                mat[i][c] = '@';
            }
        }
    }
    void setZeroes(vector<vector<int>>& mat) {
        int n = mat.size();    //row size
        int m = mat[0].size(); //column size
        for(int i=0 ; i<n ; i++){
            for(int j=0; j<m ; j++){
                if(mat[i][j] == 0){
                    row(mat , i ,m);
                    col(mat , j , n);
                }
            }
        }
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(mat[i][j] == '@'){
                    mat[i][j] = 0;
                }
            }
        }
    }
};