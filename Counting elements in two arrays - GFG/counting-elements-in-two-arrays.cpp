//{ Driver Code Starts
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


// } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
  
    int solve(int arr[],int n,int ele){
        int l=0;
        int h=n;
        int cnt=0;
        while(l<h){
            int mid=l+(h-l)/2;
            
            if(arr[mid]>ele)
                {
                    h=mid;
                }
            else if(arr[mid]<=ele){
                l=mid+1;
            }
            cnt=l;
        }
        return cnt;
    }
  
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
   
        
        sort(arr2,arr2+n);
        
        vector<int> ans;
        
        for(int i=0;i<m;i++){
            
            int cnt=solve(arr2,n,arr1[i]);
            ans.push_back(cnt);
        }
        return ans;
   
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends