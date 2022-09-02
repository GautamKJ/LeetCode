class Solution {
public:
    bool topoSort(int V,vector<int>adj[]){
        
	    vector<int>indegree(V,0);
	    for(int i=0;i<V;i++){
	        for(auto x:adj[i])
	        indegree[x]++;
	    }
	    queue<int>q;
	    for(int i=0;i<V;i++)
	    if(indegree[i]==0)
	        q.push(i);
	       
        if(q.empty())
            return false;
        
	       while(!q.empty()){
	           int temp=q.front();
	           
	           q.pop();
	           for(auto x:adj[temp]){
	               indegree[x]--;
	               if(indegree[x]==0)
	                q.push(x);
	           }
	           
	       }
         for(int i=0;i<V;i++)
             if(indegree[i]!=0)
                 return false;
        
        return true;
	        
	  
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
     
        vector<int>adj[numCourses];
        int E=prerequisites.size();
           for (int i = 0; i < E; i++) {
            int u=prerequisites[i][1];
               int v=prerequisites[i][0];
            adj[u].push_back(v);
        }
        
        return topoSort(numCourses, adj);
	
        
    }
};