class Solution {
public:
  
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
            vector<int>res;
            deque<int> temp;
           
            for(int i=0;i<k;i++){
                
                while(temp.size()>0 &&nums[temp.back()]<=nums[i])
                    temp.pop_back();
                
                temp.push_back(i);
                    
                }
        for(int i=k;i<nums.size();++i)
        {
            res.push_back(nums[temp.front()]);
            
            //delete if temp first ele is out of bound for new window
            while (!temp.empty() && temp.front()<=i-k)
                temp.pop_front();
            
            
             while(!temp.empty() &&nums[temp.back()]<=nums[i])
                    temp.pop_back();
            
            temp.push_back(i);
            
        }
        res.push_back(nums[temp.front()]);
        return res;
                    
            }
        
    
};