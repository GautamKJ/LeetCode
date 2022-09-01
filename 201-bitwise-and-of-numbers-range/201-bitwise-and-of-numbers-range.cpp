class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        if((left &right)==0)
            return 0;
        if(left==right)
            return left&right;
     long long    ans=left;
        
        for(long long   i=left+1;i<=right;i++){
            ans=ans&i;
            if(ans==0)
                return 0;
        }
        return ans;
    }
};