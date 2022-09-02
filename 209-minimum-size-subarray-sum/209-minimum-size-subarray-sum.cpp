class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int res=INT_MAX;
        int ptr1=0,ptr2=0;
        int n=nums.size();
        if(n==0)
            return 0;
        int sum=0;
        while(ptr2<n && ptr1<=ptr2){
            
            if(sum+nums[ptr2]>=target){
                cout<<sum<<endl;
                cout<<ptr2<<"       "<<ptr1<<endl;
                res=min(res,ptr2-ptr1+1);
                sum-=nums[ptr1];
                ptr1++;
                
            }
            else{
               
                sum+=nums[ptr2];
                 ptr2++;
                
            }
                
        }
 
        return res==INT_MAX?0:res;
        
    }
};