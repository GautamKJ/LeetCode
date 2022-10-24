class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int>v;
        stack<int>s;
        int temp=nums[nums.size()-1];
        int flag=false;
        for(int i=nums.size()-1;i>=0;i--){
                
            s.push(nums[i]);
               
        }
        
            
        for(int i=nums.size()-1;i>=0;i--){
            
            if(!s.empty() && nums[i]<s.top()){
                v.push_back(s.top());
            }
            else if(!s.empty() && nums[i]>=s.top()){
                
                while(!s.empty() && nums[i]>=s.top()){
                    s.pop();
                }
                if(!s.empty())
                    v.push_back(s.top());
                else
                    v.push_back(-1);
            }
                s.push(nums[i]);
        }
        
         reverse(v.begin(),v.end());
        return v;
        
    }
};