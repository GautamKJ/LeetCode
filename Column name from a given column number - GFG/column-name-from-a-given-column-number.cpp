//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int N)
    {
         string ans="";
        while(N){
            
            if(N%26==0)
                {ans+="Z";
                N=(N/26)-1;
                }
            else
            {
                ans+='A'+(N%26)-1;
                N/=26;
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends