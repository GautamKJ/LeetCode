//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        
        int l=1;
        int h=2000;
        int n=(R*C)/2;
        while(l<=h)   
        {
            int mid=(l+h)/2;
            
            int ans=0;
            
            for(int i=0;i<R;i++)
            {
                int st=0;
                int end=C-1;
                while(st<=end)
                {
                    int m=(st+end)/2;
                    if(matrix[i][m]>mid)
                        end=m-1;
                    else
                        st=m+1;
                }
                ans+=st;
            }
            if(ans>n)
                h=mid-1;
            else
                l=mid+1;
        }
        return l;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends