class Node{

    public:
         bool end;
    Node *next[26];
    Node(){
         end=false;
        for(int i=0;i<26;i++){
            next[i]=NULL;
        }
    }
};

class Trie {
   
public:
    Node* root;
    Trie() {
       
         root = new Node();
       
    }

    
    
    void insert(string word) {
        int i=0;
        Node *it=root;
      
        for(i=0;i<word.length();i++){
            if(it->next[word[i]-'a']==NULL)
                it->next[word[i]-'a']=new Node();
            it=it->next[word[i]-'a'];


        }
        it->end=true;
    }
    
    bool search(string word) {
          int i=0;
         Node *it=root;
        for(i=0;i<word.length();i++){
            if(it->next[word[i]-'a']!=NULL)
            it=it->next[word[i]-'a'];
            else
                return false;
        }
       return it->end;
    }
    
    bool startsWith(string prefix) {
           int i=0;
            Node *it=root;
        for(i=0;i<prefix.length();i++){
            if(it->next[prefix[i]-'a']!=NULL)
            it=it->next[prefix[i]-'a'];
            else
                return false;
            
        }
       return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */