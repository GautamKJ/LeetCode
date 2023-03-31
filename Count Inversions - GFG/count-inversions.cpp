//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[],int st,int mid,int end)
    {
        long long int temp[end-st+1];
        
        int i=st;
        int j=mid;
        int k=0;
        long long int inv=0;
        
        while(i<=mid-1 && j<=end)
        {
            if(arr[i]<=arr[j])
            {
                temp[k++]=arr[i++];
            }
            else
            {
                inv+=mid-i;
                temp[k++]=arr[j++];
            }
        }
        
         while(i<=mid-1)
        {
            
                temp[k++]=arr[i++];
            
        }
        
         while(j<=end)
        {
             temp[k++]=arr[j++];
           
        }    
        
        for(int i=0;i<=end-st;i++)
        {
            arr[i+st]=temp[i];
        }
        
        return inv;
        
    }
    long long int mergeSort(long long arr[],long long st,long long end)
    {
        long long inv=0;
        if(st<end)
        {
            
            int mid=(st+end)/2;
            inv+=mergeSort(arr,st,mid);
            inv+=mergeSort(arr,mid+1,end);
            
            inv+=merge(arr,st,mid+1,end);
            
            
            
        }
        return inv;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        
        return mergeSort(arr,0,N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends