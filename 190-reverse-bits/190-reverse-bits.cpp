class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        uint32_t res=0;
        string str;
    for(int i=0;i<32;i++){
        if((n>>i) &1)
         res=(res)|(1<<(31-i));
        else
        str+= to_string(n>>i);
        
    }
        cout<<res<<endl;
        return res;
        
        
    }
};