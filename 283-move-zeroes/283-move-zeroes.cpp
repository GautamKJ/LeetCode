class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int ptr1=-1,ptr2=-1;
        
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ptr1=i;
                break;
            }
        }
        if(ptr1==-1)
            return ;
        for(int i=ptr1+1;i<n;i++){
            if(nums[i]!=0){
                ptr2=i;
                break;
            }
        }
        
        while(ptr2<n && ptr1<=ptr2){
            
            if(nums[ptr1]==0 && nums[ptr2]!=0){
                swap(nums[ptr1],nums[ptr2]);
                ptr1++;
                ptr2++;
            }
            else if(nums[ptr2]==0)
                ptr2++;
            
            else if(nums[ptr1]!=0)
                ptr1++;
        }
            
        
    }
};