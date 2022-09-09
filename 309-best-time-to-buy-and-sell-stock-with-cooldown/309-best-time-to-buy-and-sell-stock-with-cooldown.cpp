class Solution {
public:
    int solve(vector<int>&price,int i,int flag,int profit, vector<vector<int>>&dp){
        if(i>=price.size())
            return 0;
        if(dp[i][flag]!=-1)
            return dp[i][flag];
        int buy=0,sell=0,exc=0;
        if(flag==1)
        buy=-price[i]+solve(price,i+1,0,profit-price[i],dp);
        else
        sell=price[i]+solve(price,i+2,1,profit+price[i],dp);
        
        exc=solve(price,i+1,flag,profit,dp);
        
        return dp[i][flag]= max(exc,max(buy,sell));
        
        
    }
    int maxProfit(vector<int>& prices) {
        //buy---1
        //sell---0
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(prices,0,1,0,dp);
    }
};