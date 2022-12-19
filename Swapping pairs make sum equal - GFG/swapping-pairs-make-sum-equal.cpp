//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int summation(int arr[],int n){
	    int sum=0;
	    for(int i=0;i<n;i++)
	    sum+=arr[i];
	    
	    return sum;
	    
	}
	
	int solve(int A[], int n, int B[], int m){
	    int ptr1=0,ptr2=0;
	    int sum1=summation(A,n);
        int sum2=summation(B,m);
	    while(ptr2<m){
	        ptr1=n-1;
	        int l=0,h=n;
	        while(l<h){
	            int mid=l+(h-l)/2;
	            
	            int temp1=sum1,temp2=sum2;
	            sum1=sum1-A[mid]+B[ptr2];
	            sum2=sum2-B[ptr2]+A[mid];
	            
	            if(sum1==sum2)
	            return 1;
	            if(sum1>sum2){
	                l=mid+1;
	            }
	            else 
	            h=mid-1;
	            
	            sum1=temp1;
	            sum2=temp2;
	            
	            
	            
	        }
	        
	        ptr2++;
	        
	    }
	    return -1;
	}
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        sort(A,A+n);
        sort(B,B+m);
        
        int sum1=summation(A,n);
        int sum2=summation(B,m);
        
        if(sum2==sum1)
        return 1;
        
        if(sum1<sum2)
        return solve(B,m,A,n);
        else 
        return solve(A,n,B,m);
	}
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends