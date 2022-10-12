class Solution {
public:
    int solve(vector<int>&nums){
        int n=nums.size();
     if(n<=1)
            return 0;
    
        int sum=0;
        
        int f0=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            f0+=i*nums[i];
        }
    
        int curr;
        int ans=f0;
        int prev=f0;
        
        for(int i=1;i<n;i++){
            curr=prev+sum-n*nums[n-i];
                prev=curr;
            ans=max(ans,curr);
        }
        return ans;
        
        
    
    }
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)
            return 0;
        
        return solve(nums);
    }
};