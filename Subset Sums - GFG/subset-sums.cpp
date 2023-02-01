//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solve(vector<int>&arr,vector<int>&res,int N,int idx,int sum){
        res.push_back(sum);
        
        if(idx>=N)
            return;
        
        
        
        for(int i=idx;i<N;i++){
            
            solve(arr,res,N,i+1,sum+arr[i]);
        }
            
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>res;
        
        solve(arr,res,N,0,0);
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends