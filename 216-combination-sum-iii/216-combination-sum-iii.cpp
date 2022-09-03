class Solution {
public:
    void solve(vector<int>& candidates, vector<vector<int>>&ans,vector<int>temp,int target,int n,int k){
        if(target==0 && temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(n==0 || temp.size()>k)
                return;
        
        if(target>0){
            temp.push_back(candidates[n-1]);
            solve(candidates,ans,temp,target-candidates[n-1],n-1,k);
            if(!temp.empty())
            temp.pop_back();
        }
        solve(candidates,ans,temp,target,n-1,k);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>>ans;
        vector<int>temp;
        vector<int>candidates;
        for(int i=1;i<10;i++)
        {
            candidates.push_back(i);
        }
        solve(candidates,ans,temp,n,9,k);
        return ans;
    }
};