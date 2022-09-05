class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int cnt=0,zero=0;
        for(int i=0;i<31;i++){
            
            if(((n>>i)&1)==1)
                cnt++;
            else
                zero++;
        }
        // cout<<cnt<<endl;
//         cout<<zero<<endl;
        if(n>0 && cnt==1)
            return true;
        return false;
        return cnt!=1 ?false:true;
        
       return n > 0 && not (n & n - 1);
       
    }
};