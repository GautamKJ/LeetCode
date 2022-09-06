class Solution {
public:
    vector<int> solve(string s ){
        vector<int>ans;
       
        for(int i=0;i<s.length();i++){
            if(s[i]=='+' || s[i]=='-' || s[i]=='*'){
                vector<int>left=solve(s.substr(0,i));
                vector<int>right=solve(s.substr(i+1));
                for(int x:left){
                    for(int y:right){
                        if(s[i]=='+') ans.push_back(x+y);
                        if(s[i]=='-') ans.push_back(x-y);
                        if(s[i]=='*') ans.push_back(x*y);
                    }
                }
            }
        }
         if(ans.size()==0){
            ans.push_back(stoi(s));
            return ans;
        }
        
        return ans;
        
    }
    vector<int> diffWaysToCompute(string expression) {
        
        int n=expression.length();
            return solve(expression);
    }
};