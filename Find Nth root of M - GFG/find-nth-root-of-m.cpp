//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    if(n==1)
	        return m;
	    int l=1;int h=m;
	    for(int i=2;i<=n;i++)
	    {
	        
	             l=1;
	           //  cout<<h<<endl;
	             while(l<=h)
        {
            long long int mid=l+(h-l)/2;
            
            long long int sq=pow(mid,i);
            
            if(i==n && sq==m)
                return mid;
            if(sq==m)
                {
                    h=mid;
                    break;
                }
            else if(sq>m)
                h=mid-1;
            else
                l=mid+1;
                
        }
        
	            
	        }
	        return -1;
	    
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends