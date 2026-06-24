class Solution {
public:
    int up(int i, int j, int m, int n, vector<vector<int>> &dp){
        if(i==m-1 && j==n-1){
            return 1;
        }
        else if(i==m || j==n){
            return 0; 
        }
        if(dp[i][j] != -1)  return dp[i][j];
        else{
        // int dsum = up(i+1,j,m,n,dp); 
        // int rsum = up(i,j+1,m,n,dp);
        // return dsum+rsum;
            return dp[i][j] = up(i+1,j,m,n,dp) + up(i,j+1,m,n,dp);
        } 
    }

    int uniquePaths(int m, int n) {
        // int sum = up(0,0,m,n);
        vector<vector<int>> dp(m, vector<int> (n, -1));
        return up(0,0,m,n, dp);
    }
};