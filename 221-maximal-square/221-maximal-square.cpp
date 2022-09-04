class Solution {
      int maxi=INT_MIN;
public:
  
    int solve(vector<vector<char>>& matrix,int i,int j,int n,int m,vector<vector<int>>&dp){
        
        if(i>=n ||j>=m )
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int right=solve(matrix,i,j+1,n,m,dp);
        int diagonal=solve(matrix,i+1,j+1,n,m,dp);
        int down=solve(matrix,i+1,j,n,m,dp);
        
        if(matrix[i][j]=='1')
        {
            maxi=max(maxi,1+min(right,min(diagonal,down)));
       
            return dp[i][j]= 1+min(right,min(diagonal,down));
        }
        else
        return dp[i][j]= 0;
            
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        
        solve(matrix,0,0,n,m,dp);
        return maxi==INT_MIN?0:maxi*maxi;
        
    }
};