class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
     
        vector<string>res;
        if(nums.size()==0)
            return res;
        string str=to_string(nums[0]);
        int cnt=1;
        int last=nums[0];
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]!=1+nums[i-1]){
                if(cnt>1){
                str+="->"+to_string(last);   
                    res.push_back(str);
                }
                else
                    res.push_back(to_string(last));
                if(i<nums.size())
                str=to_string(nums[i]);
                cnt=0;
                    
            }
            cnt++;
            last=nums[i];
            
            
        }
         if(cnt>1){
                str+="->"+to_string(last);   
                    res.push_back(str);
                }
                else
                    res.push_back(str);
                
        return res;
    }
};