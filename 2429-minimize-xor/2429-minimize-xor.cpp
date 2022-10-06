class Solution {
public:
        long long int find_setBit(long long int n){
            int cnt=0;
            for(int i=0;i<32;i++){
                if(((n>>i)&1)==1)
                    cnt++;
            }
            return cnt;
        }
    int setBit(int num, int i)
{
   
    return num | (1 << i);
}
    int minimizeXor(int num1, int num2) {
        
        int s1=find_setBit(num1);
        int s2=find_setBit(num2);
        if(s1==s2){
            return num1;
        }
   cout<<s1<<"  "<<s2<<endl;
        int ans=0;
  
       
        for(int i=31;i>=0;i--){
            
            if(((num1>>i)&1)==1)
            if(s2>0){
            ans= setBit(ans,i);
                s2--;
                
            }
        }
        int i=0;
        while(s2>0 && i<32 ){
             if(((ans>>i)&1)!=1)
            if(s2>0){
             ans= setBit(ans,i);
                s2--;
                
            }
            i++;
            
        }
          
        return ans;
        
        
        
        
    }
};