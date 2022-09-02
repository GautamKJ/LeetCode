class Solution {
public:
    string minWindow(string s, string p) {
       unordered_map<char,int> m;
      
        
        for(int i=0;i<p.length();i++)
           m[p[i]]++;
        
        int n=p.length();
        
       
        int mi=INT_MAX;
        int ptr1=0,ptr2=0;
       
        int start=0;
       
      while(ptr2<s.length()){
          if(m.find(s[ptr2])!=m.end()){
       
              
              if(m[s[ptr2]]>0)
                n--;
                m[s[ptr2]]--;
          }
          ptr2++;
          while(n==0 && ptr1<=ptr2){
             
              if(mi>(ptr2-ptr1))
              { 
                  
                  start=ptr1;
                  mi=ptr2-ptr1;
                  
              }
              if(m.find(s[ptr1])!=m.end()){
                  m[s[ptr1]]++;
                  if(m[s[ptr1]]>0)
                    {n++;
                }
                    
              }
              ptr1++;
          }
      }
       
       return mi==INT_MAX?"":s.substr(start,mi);
        
        // cout<<s.substr(index.first,index.second) <<"       "<<index.first<<" "<<index.second<<endl;
       
    }
};