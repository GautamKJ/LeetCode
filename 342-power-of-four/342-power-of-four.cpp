class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n<=0)
           return false;
        
        int zero=0;
        int one=0;
        for(int i=0;i<32;i++){
            
            if(((n>>i)&1)==1)
                one++;
            else if(one==0)
            {
                zero++;
            }
                
        }
        if(one==1 && zero%2==0)
            return true;
        
        return false;
           
    }
};