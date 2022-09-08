class Solution {
public:
 
    int solve(int target, vector<int>&dp){
        if(target==0){
           
            return 0 ;  
        }
        
        
        if(dp[target]!=-1)
            return dp[target];
        
    int ans=INT_MAX,count=0;
    for(int i=1;i*i<=target;i++){
        int square=i*i;
      
     count= 1+ solve(target-square,dp);
        // cout<<count<<endl;
        ans=min(ans,count);
        
    }        
        return dp[target] =ans;
     
    }
    int numSquares(int n) {
        
        vector<int>dp(n+1,-1);
    return  solve(n,dp);
    
        
    }
};