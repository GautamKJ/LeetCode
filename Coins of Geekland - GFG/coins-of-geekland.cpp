//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    public:
    int Maximum_Sum(vector<vector<int>> &mat,int N,int K){
        
        int coin=0;
        int ans=INT_MIN;
        list<int>row,col;
        int rowcount=0,colcount=0;
        int r=0;
        
        while(r<=N-K){
            // cout<<"----------------"<<endl;
            col.clear();
            int k=K;
            coin=0;
            int l=0;
            for(int i=r;i<K+r;i++){
             rowcount=0,colcount=0;
             
            for(int j=0;j<K;j++){
                // rowcount+=mat[i][j];
                colcount+=mat[j+r][l];
                coin+=mat[i][j];
            }
            l++;
            // cout<<colcount<<endl;
            // row.push_back(rowcount);
            col.push_back(colcount);
        }
        // cout<<"coin "<<coin<<"  "<<r<<endl;
        
        // cout<<"col.front() "<<col.front()<<endl;
        ans=max(ans,coin);
            while(k<N){
        
        colcount=0;
        // cout<<r<<"  "<<k<<endl;
        for(int j=r;j<r+K;j++){
            colcount+=mat[j][k];
        }
        // cout<<" colcount "<<colcount<<endl;
        int front=col.front();
        // cout<<"front  "<<front<<endl;
        col.pop_front();
        coin-=front;
        col.push_back(colcount);
        coin+=colcount;
         ans=max(ans,coin);
         k++;
            }
        r++;
        
        }
        
        
        return ans;
        
        
    }  
};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}

// } Driver Code Ends