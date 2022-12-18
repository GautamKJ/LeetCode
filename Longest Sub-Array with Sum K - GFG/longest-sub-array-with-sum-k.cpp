//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<int,int>hash;
        
        int ans=0;
        
        int sum=0;
        
      for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum==K)
                ans=i+1;
            else if(hash.find(sum-K)!=hash.end())
                {
                    ans=max(ans,i-hash[sum-K]);
                    // cout<<"ads "<<hash[sum-K]<<endl;
                }
                
            if(hash.find(sum)==hash.end()){
                hash[sum]=i;
                // cout<<hash[sum]<<endl;
                
            }
                
            
        }
        return ans;
        
        
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends