class Solution {
public:
    int solve(vector<int>&num,int n){
        if(num.size()>=n)
            return 0;
        // if(n==1)
        //     return 10;
        int ans=0;
        for(int i=0;i<=9;i++){
       
                    if((num.empty() && i==0) || (find(num.begin(),num.end(),i)!=num.end()))
                       continue; 
            // for(auto x:num){
            //     cout<<x<<" ";
            // }
            // cout<<endl;
            // cout<<i <<"-- "<<endl;
            num.push_back(i);
            ans += 1+solve(num,n);
            num.pop_back();
        }
        return ans;
       
        
    }
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)
            return 1;
        if(n==1)
            return 10;
        
      
        vector<int>num;
        return 1+solve(num,n);
        
    }
};