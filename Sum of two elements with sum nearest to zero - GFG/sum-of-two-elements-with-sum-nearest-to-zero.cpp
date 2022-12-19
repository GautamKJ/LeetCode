//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    int mx=INT_MAX;
    int ans;
    public:
    
        void binary_search(int arr[], int n,int ele,int index){
            
                int l=0,h=n-1;
                
                while(l<=h){
                    int mid=l+(h-l)/2;
                    // cout<<"ans "<<mx<<"  "<<ans<<endl;
                    if(mid!=index && arr[mid]+ele==0){
                        mx=min(mx,0);
                        ans=0;
                        break;
                    }
                    else if(mid!=index && arr[mid]+ele>=mx){
                       if(mx>=abs(arr[mid]+ele))
                        {
                            mx=abs(arr[mid]+ele);
                            if(ans==abs(arr[mid]+ele))
                             ans=max(ans,arr[mid]+ele);    
                             else 
                             ans=arr[mid]+ele;
                        }
                        h=mid-1;
                    }
                     else if(mid!=index && arr[mid]+ele<mx)
                    { 
                        l=mid+1;
                        
                        if(mx>abs(arr[mid]+ele))
                        {
                            mx=abs(arr[mid]+ele);
                            if(ans==abs(arr[mid]+ele))
                             ans=max(ans,arr[mid]+ele);    
                             else 
                             ans=arr[mid]+ele; 
                        }
                       
                    }
                    else if(abs(ele+arr[l]) >= abs(ele+arr[h])){
                        l++;
                    }
                    else if(abs(ele+arr[l]) < abs(ele+arr[h])){
                        h--;
                    }
                }
            
        }
        int closestToZero(int arr[], int n)
        {
            sort(arr,arr+n);
            
            for(int i=0;i<n;i++){
                
                binary_search(arr,n,arr[i],i);
            }
            return ans;
            
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends