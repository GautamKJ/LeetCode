class Solution {
public:
    bool isHappy(int n) {
    
        
        int temp=10;
        int sum=0;
        int num=n;
        int flag=0;
        int i=0;
        unordered_map<int,int>mp;
        while(n){
            sum+=(n%temp)*(n%temp);
            
                

            n/=temp;
            if(n==0){
                i++;
                if(sum==1)
                    return true;
                
                if(mp.find(sum)!=mp.end())
                    return false;
                mp[sum]++;
                
                n=sum;
                sum=0;
            }
            
        }
        return false;
        
    }
};