class Solution {
public:
    void solve(vector<int>&nums,int i,int j){
        
        while(i<j)
        {    swap(nums[i],nums[j]);
         i++;
         j--;
        }
        
        
    }
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        solve(nums,n-k%n,n-1);
        solve(nums,0,n-k%n-1);
        solve(nums,0,n-1);
        
    }
};