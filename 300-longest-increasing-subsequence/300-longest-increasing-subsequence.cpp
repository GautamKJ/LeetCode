class Solution {
public:
    int solve(vector<int>&nums,int i,int prev,vector<vector<int>>&dp){
        if(i==nums.size())
            return 0;
        if(dp[i][prev+1]!=-1)
            return dp[i][prev+1];
        
        int inc=INT_MIN,exc=INT_MIN;
        
        if(prev==-1 || nums[prev]<nums[i]){
            inc=1+solve(nums,i+1,i,dp);
        }
        exc=solve(nums,i+1,prev,dp);
        
        return dp[i][prev+1]= max(inc,exc);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
      vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(nums,0,-1,dp);
    }
};