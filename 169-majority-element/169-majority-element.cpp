class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ansIndex=0;
        int cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[ansIndex])
                cnt++;
            else
                cnt--;
            if(cnt==0){
                ansIndex=i;
                cnt=1;
                
            }
        }
        cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[ansIndex])
                cnt++;
        }
        if(cnt>nums.size()/2)
            return nums[ansIndex];
       
            return -1;
    }
};