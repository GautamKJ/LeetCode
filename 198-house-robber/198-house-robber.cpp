class Solution {
public:
    int solve(vector<int>&nums,int house,int n, vector<int>&dp){
        if(house>=n)
            return 0;
        if(dp[house]!=-1)
            return dp[house];
        int inc=INT_MIN,exc=INT_MIN;
         inc=nums[house]+solve(nums,house+2,n,dp);
        exc=solve(nums,house+1,n,dp);
        
        return dp[house]= max(inc,exc);
    }
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n,-1);
        return solve(nums,0,n,dp);
    }
};