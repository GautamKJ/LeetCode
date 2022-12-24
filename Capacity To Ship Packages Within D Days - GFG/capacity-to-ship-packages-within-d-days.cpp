//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int isFeasible(int mid,int arr[],int D,int N){
      
//   cout<<mid<<endl;
      int k=1;
      int sum=0;
      for(int i=0;i<N;i++){
         sum+=arr[i];
           if(sum>mid){
                k++;
                sum=arr[i];
            }
        
      }
      
      if(k>D)
      return 1;
      if(k<=D)
      return 0;
      if(k<D)
      return -1;
    //   cout<<"k "<<k<<"  mid  "<<mid<<endl;
    //   return k>D;
  }
    int leastWeightCapacity(int arr[], int N, int D) {
        
        
        int sum=0;
        int maxi=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
            maxi=max(maxi,arr[i]);
        }
        int h=sum;
        int l=maxi;
        int ans=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            int check=isFeasible(mid,arr,D,N);
            if(check==0){
                h=mid-1;
                ans=mid;
                
            }
            else if(check==-1)
            h=mid-1;
            else if(check==1)
            l=mid+1;
            
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends