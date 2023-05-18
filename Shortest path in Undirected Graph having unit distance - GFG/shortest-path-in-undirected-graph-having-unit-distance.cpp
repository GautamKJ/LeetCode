//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#define pp pair<int,int>
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        
        vector<vector<int>>graph(N);
        
        for(int i=0;i<M;i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<int>res(N,-1);
        vector<int>vis(N,0);
        
        priority_queue<pp,vector<pp>,greater<pp>>pq;
        
        pq.push({0,src});
        vis[src]=1;
        
        
        while(!pq.empty())
        {
            auto temp=pq.top();
            pq.pop();
            int cost=temp.first;
            int node=temp.second;
            
            res[node]=cost;
            
            for(auto x:graph[node])
            {
                
                
                if(vis[x]==0 && x!=node)
                {
                
                    pq.push({cost+1,x});
                    vis[x]=1;
                }
                
            }
            
        }
        return res;
        
        
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends