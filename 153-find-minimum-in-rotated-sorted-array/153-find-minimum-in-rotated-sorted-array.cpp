class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        if(nums.size()==1)
            return nums[0];
        int peak_index=-1;
        while(l<=h){
            int mid=(l+h)/2;
            
            if(((mid-1>=0 && nums[mid]>nums[mid-1]) && (mid+1<nums.size() && nums[mid]>nums[mid+1])) || (mid==0 && nums[mid]>nums[mid+1]))
            {
                peak_index=mid;
                break;
            }
            else if(nums[mid]>=nums[0])
                l=mid+1;
            else 
                h=mid-1;
                
                
        }
        return nums[peak_index+1];
        
    }
};