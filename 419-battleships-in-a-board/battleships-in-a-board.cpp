class Solution {
public:
    void dfs(int i , int  j , vector<vector<char>>& board ,  vector<vector<bool>>& vis , int n , int m){
        if(i<0 || j<0 || i>=n || j>=m || board[i][j]!='X' || vis[i][j]){
            return;
        }
        vis[i][j] = true;
        dfs(i-1 , j , board , vis , n , m); //top
        dfs(i , j-1 , board , vis , n , m); //left
        dfs(i+1 , j , board , vis , n , m); //bottom
        dfs(i , j+1 , board , vis , n , m); //right
    }
    int countBattleships(vector<vector<char>>& board) {
        int n=board.size();
        int m = board[0].size();
        int count = 0;
        vector<vector<bool>> vis(n , vector<bool>(m,false));
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(board[i][j] == 'X' && !vis[i][j]){
                dfs(i ,j , board , vis , n , m);
                count++;
                }
            }
        }
        return count;
    }
};