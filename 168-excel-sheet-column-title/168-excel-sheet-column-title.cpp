class Solution {
public:
    string convertToTitle(int columnNumber) {
       
        string str="";
        string s="";
        s='A'+1;
        cout<<s<<endl;
            
        while(columnNumber){
            int alpha=columnNumber%26;
            cout<<alpha<<endl;
            if(alpha==0){
                str+='Z';
                columnNumber-=1;
            }
            else
            str+='A'+(alpha-1);
           if(columnNumber==26)
               break;
                columnNumber/=26;
      
        }
        reverse(str.begin(),str.end());
        return str;
    }
};