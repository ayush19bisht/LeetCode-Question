class Solution {
public:
    bool divisorGame(int n) {
        if(n==0 || n==1) return false;
        vector<bool> dp(n+1 , false);
        dp[1] = false;
        for(int i=2 ; i<=n ; i++){
            for(int x=1 ; x<i ; x++){
                if(i % x == 0 && dp[i-x] == false){
                    dp[i]= true;
                    break;
                }
            }
        }
        return dp[n];
    }
};