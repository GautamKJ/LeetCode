//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int l=1;
        long long int h=x;
        
        while(l<=h)
        {
            long long int mid=l+(h-l)/2;
            
            long long int sq=mid*mid;
            
            if(sq==x)
                return mid;
            else if(sq>x)
                h=mid-1;
            else
                l=mid+1;
                
        }
        return h;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends