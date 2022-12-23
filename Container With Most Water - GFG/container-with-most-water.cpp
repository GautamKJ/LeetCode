//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int n)
{
   
   int l=0;
   int h=n-1;
   
   long long ans=0;
   while(l<h){
       
       ans=max(ans,min(A[l],A[h])*(h-l));
       
       if(A[l]>A[h])
        h--;
        else
        l++;
       
   }
   return ans;
   
    
    
    
    
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends