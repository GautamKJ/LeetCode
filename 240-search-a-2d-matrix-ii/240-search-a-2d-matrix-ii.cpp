class Solution {
public:
bool solve(vector<vector<int>>& matrix, int target,int i,int  j,int n,int m){
    
    if(i>=0 && i<n && j>=0 && j<m){
        
        if(matrix[i][j]==target)
            return true;
        
        if(matrix[i][j]>target){
            if(solve(matrix,target,i,j-1,n,m))
                return true;
        }
        else
            if(solve(matrix,target,i+1,j,n,m))
                return true;
        
        return false;
    }
    return false;
        
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        return solve(matrix,target,0,m-1,n,m);
    }
};