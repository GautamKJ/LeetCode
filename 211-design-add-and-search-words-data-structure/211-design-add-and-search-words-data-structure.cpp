class Node{
  
    public:
    Node *next[26];
    bool isend;
    Node(){
        isend=false;
        for(int i=0;i<26;i++)
            next[i]=NULL;
    }
};

class WordDictionary {
    Node *root;
public:
    WordDictionary() {
        root=new Node();
    }
    
    void addWord(string word) {
        
        Node *it=root;
        for(int i=0;i<word.size();i++){
            if(it->next[word[i]-'a']==NULL){
                it->next[word[i]-'a']=new Node();
            }
            it= it->next[word[i]-'a'];
        }
        it->isend=true;
    }
    
    bool solve(string &word,int idx, Node *it){
         
        if(idx>=word.size()){
            return it->isend;
        }
        if(word[idx]!='.' && it->next[word[idx]-'a']==NULL)
            return false;
        
        
         if(word[idx]!='.' && it->next[word[idx]-'a']!=NULL){
           
            it=it->next[word[idx]-'a'];
            return solve(word,idx+1,it);
        }
        
        else if(word[idx]=='.'){
            for(int i=0;i<26;i++)
            {
               
                if(it->next[i]!=NULL)
                {
                    
                 
                    if(solve(word,idx+1,it->next[i]))
                        return true;
                       
                }
            }
       
        }
        
        return false;
       
    }
    
    bool search(string word) {
        
        return solve(word,0,root);
      
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */