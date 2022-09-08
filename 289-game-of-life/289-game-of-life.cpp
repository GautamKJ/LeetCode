class Solution {
public:
    bool isValid(int i,int j,int n,int m){
        if(i>=n || j>=m|| i<0 || j<0)
            return false;
      
        return true;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        
        
        int n=board.size();
        int m=board[0].size();
         int dx[8]={0,0,1,1,1,-1,-1,-1};
      int dy[8]=   {1,-1,0,-1,1,0,-1,1};
      
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count=0;
                for(int k=0;k<8;k++){
                    int idx=i+dx[k];
                    int idy=j+dy[k];
                    
                    if(isValid(idx,idy,n,m) && abs(board[idx][idy])==1){
                     
                        count++;
                        
                    }
                }
                if(board[i][j]==1 && (count<2 || count>3)){
                    cout<<i<<"  "<<j<<endl;
                    board[i][j]=-1;
                }
                    
                else if(board[i][j]==0 && count==3)
                    board[i][j]=2;
                
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(board[i][j]>=1)
                    board[i][j]=1;
                else 
                    board[i][j]=0;
                
            }
        }
      
        
        
       
    }
};