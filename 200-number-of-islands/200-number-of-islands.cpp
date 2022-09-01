class Solution {
public:
    int solve(vector<vector<char>>& grid,int i,int j,int n,int m){
        if(i>=n || j>=m || j<0 || i<0)
            return 0;
        if(grid[i][j]!='1')
            return 0;
        grid[i][j]='2';
        
        int right=solve(grid,i,j+1,n,m);
      
        int left=solve(grid,i,j-1,n,m);
        int down=solve(grid,i+1,j,n,m);
        int top=solve(grid,i-1,j,n,m);
        return 0;
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1')
                    ans+=1+solve(grid,i,j,n,m);
            }
        }
        return ans;
    }
};