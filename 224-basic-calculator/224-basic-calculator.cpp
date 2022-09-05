class Solution {
public:
     int priority(char ch){
        
        if(ch=='*' || ch=='/')
            return 2;
        if(ch=='+'|| ch=='-')
            return 1;
      
        return 0;
    }
    int calculate(string s) {
     
            stack<int>st1;
            stack<char>st2;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]==' ')
                continue;
            int flag=0;
            string currentNumber="";
            while(i<s.length() && s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/' && s[i]!='(' && s[i]!=')'){
                
                currentNumber+=s[i];
                flag=1;
                i++;
                // cout<<st1.top() <<"----------"<<endl;;
            }
            if(flag){
                st1.push(stoi(currentNumber));
                // cout<<st1.top()<<"  st1"<<endl;
                i--;
            }
            
            if(s[i]=='+' || s[i]=='-' ||s[i]=='*' || s[i]=='/' ||s[i]=='('){
                
                while(!st2.empty() && priority(st2.top())>=priority(s[i]) && s[i]!='(' ){
                    
                    int op2=st1.top();
                    st1.pop();
                    int op1=st1.top();
                    st1.pop();
                    
                    char ch=st2.top();
                    st2.pop();
                    
                 
                    
                    if(ch=='+'){
                        int ans=op1+op2;
                        st1.push(ans);
                    }
                    if(ch=='-'){
                        int ans=op1-op2;
                        st1.push(ans);
                    }
                    if(ch=='*'){
                        int ans=op1*op2;
                        st1.push(ans);
                    }
                    if(ch=='/'){
                        int ans=op1/op2;
                        st1.push(ans);
                    }
                    
                }
                if(s[i]=='(' || st1.size()==0)
                st1.push(0);
                st2.push(s[i]);
                // cout<<" op "<<st2.top()<<endl;
            }
            else if(s[i]==')'){
                    while(!st2.empty()&& st2.top()!='('){
                    
                    int op2=st1.top();
                    st1.pop();
                    int op1=st1.top();
                    st1.pop();
                    
                    char ch=st2.top();
                    st2.pop();
                 cout<<op2<<"  "<<op1<<"  "<<ch<<endl;
                 
                    
                    if(ch=='+'){
                        int ans=op1+op2;
                        st1.push(ans);
                    }
                    if(ch=='-'){
                        int ans=op1-op2;
                        st1.push(ans);
                    }
                    if(ch=='*'){
                        int ans=op1*op2;
                        st1.push(ans);
                    }
                    if(ch=='/'){
                        int ans=op1/op2;
                        st1.push(ans);
                    }
                       
                }
                if(st2.top()=='(')
               { st2.pop();
                
                int temp=st1.top();
                cout<<"temo "<<temp<<endl;;
                
                st1.pop();
                if(st1.top()==0){
                st1.pop();}
                st1.push(temp);
                 
                    }
                    
        
            }   
        }
         
             while(!st2.empty() && st1.size()>1){
                    cout<<"here "<<st2.size()<<endl;
                    int op2=st1.top();
                    st1.pop();
                    int op1=st1.top();
                    st1.pop();
                    
                    char ch=st2.top();
                    st2.pop();
                    if(!st2.empty()&&st2.top()!='(')
                        st2.pop();
                 cout<<op2<<"  "<<op1<<"  "<<ch<<endl;
                    
                    if(ch=='+'){
                        int ans=op1+op2;
                        st1.push(ans);
                    }
                    if(ch=='-'){
                        int ans=op1-op2;
                        st1.push(ans);
                    }
                    if(ch=='*'){
                        int ans=op1*op2;
                        st1.push(ans);
                    }
                    if(ch=='/'){
                        int ans=op1/op2;
                        st1.push(ans);
                    }
                    
                }
      
      
            return st1.top();
        }
      
};