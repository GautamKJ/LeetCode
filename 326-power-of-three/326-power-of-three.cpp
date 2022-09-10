class Solution {
public:
    bool solve(int n){
        if(n==1)
            return true;
    
        
        if(n%3==0 && solve(n/3))
            return true;
        return false;
    }
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;
        
        return solve(n);
    }
};