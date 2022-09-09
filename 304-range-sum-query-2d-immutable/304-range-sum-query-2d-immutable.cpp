class NumMatrix {
    vector<vector<int>>temp;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        temp=matrix;
        
        for(int i=0;i<matrix.size();i++){
            int sum=0;
            for(int j=0;j<matrix[0].size();j++){
              sum+=temp[i][j];
                temp[i][j]=sum;
               
            }
        }
         for(int i=0;i<matrix[0].size();i++){
            int sum=0;
            for(int j=0;j<matrix.size();j++){
               sum+=temp[j][i];
                temp[j][i]=sum;
               
               
            }
        }
        
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
               cout<<temp[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
       
        int total=temp[row2][col2];
        int minus1=0,minus2=0,minus3=0;
        if(row1-1>=0)
         minus1=temp[row1-1][col2];
        if(col1-1>=0 )
         minus2=temp[row2][col1-1];
        if(col1-1>=0 &&row1-1>=0)
         minus3=temp[row1-1][col1-1];
        // cout<<total<<"  "<<minus1<<"  "<<minus2<<endl;
        return total-minus1-(minus2-minus3);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */