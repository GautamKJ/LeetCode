//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isValid(char board[9]){
        
        int zero=0,cross=0;
        
        for(int i=0;i<9;i++){
          
                if(board[i]=='O')
                    zero++;
                else
                    cross++;
          
        }
    // cout<<cross <<" "<<zero<<endl;
        if((cross-zero)>1 || zero>cross){
            
        return false;
        }
          
        //  X X O
        //  O O X
        //  O X X
        
       
        int win=0;
        
        if(board[0]==board[1] && board[1] ==board[2] && board[0]=='O')
            return false;
        if(board[4]==board[3] && board[3]==board[5]&& board[3]=='O')
            return false;
        if(board[6]==board[7] && board[7] ==board[8]&& board[6]=='O')
            return false;
        if(board[0]==board[4] && board[4]==board[8]&& board[0]=='O')
            return false;
        if(board[2]==board[4] && board[4]==board[6]&& board[2]=='O')
            return false;
        if(board[0]==board[3] && board[3] ==board[6]&& board[0]=='O')
            return false;
        if(board[4]==board[1] && board[1]==board[7]&& board[4]=='O')
            return false;
        if(board[2]==board[5]&& board[5]==board[8]&& board[2]=='O')
            return false;
            
    
        
        return true;
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        char board[9];
        for (int i = 0; i < 9; i++) {
            cin >> board[i];
        }
        Solution ob;
        auto ans = ob.isValid(board);
        cout << (ans ? "Valid\n" : "Invalid\n");
    }
    return 0;
}
// } Driver Code Ends