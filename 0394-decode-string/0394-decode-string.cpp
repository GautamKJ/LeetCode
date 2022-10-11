class Solution {
public:
    string merge(string str,int n){
        
        string res="";
        while(n){
            res+=str;
            n--;
        }
        return res;
        
    }
    string decodeString(string s) {
        
        stack<char>st;
     
        
         
        for(int i=0;i<s.length();i++){
        
       
            if(s[i]!=']' ){
                st.push(s[i]);
            }
            
            else if(s[i]==']'){
                
                string str="";
                while( !st.empty() && st.top()!='[')
                {    str=st.top()+str;
                        st.pop();
                }
                if(!st.empty())
                st.pop();
                    int temp=0;
                string num="";
                while( !st.empty() &&st.top()-'0'>=0 && st.top()-'0'<10 ){
                     num=st.top()+num;
                   
                    st.pop();
                }
                temp=stoi(num);
                string res=merge(str,temp);
                int n=res.size();
                int j=0;
                while(j<n){
                    st.push(res[j]);
                    j++;
                }
                
            }
            
        }
        string str="";
        while(!st.empty()){
            str=st.top()+str;
            st.pop();
                
        }
        return str;
        
    }
};