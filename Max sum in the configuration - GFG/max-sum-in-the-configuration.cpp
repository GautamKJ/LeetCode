//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int A[],int N)
{
    int sum=0,cursum=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            cursum+=i*A[i];
        }
    
    int ans=cursum;
    
    int nextSum;
    for(int i=1;i<N;i++){
        nextSum=cursum +sum -N*A[N-i-1];
        
        cursum=nextSum;
        ans=max(ans,cursum);
    }
    
    return ans;

}