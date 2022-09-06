class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero=0;
        int mulwithout=1;
        int mul=1;
        
        for(int x:nums){
            if(x==0)
                zero++;
            if(x!=0){
                mulwithout*=x;
            }
            mul*=x;
        }
        
        vector<int>res;
        
        for(int x:nums){
            
            if(x==0 && zero==1)
                res.push_back(mulwithout);
            else if(x==0 && zero>1)
                res.push_back(mul);
            else
                res.push_back(mul/x);
                
        }
        return res;
        
        
    }
};