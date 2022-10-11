class Solution {
public:
    void solve(vector<int>&ans,int i,int n){
   
    for(int j=i;j<=n && j<((i/10)+1)*10; j++){
        
        ans.push_back(j);
        if(j*10<=n)
            solve(ans,j*10,n);
        
    }
    }
    vector<int> lexicalOrder(int n) {
        
        vector<int>ans;
        solve(ans,1,n);
        return ans;
    }
};