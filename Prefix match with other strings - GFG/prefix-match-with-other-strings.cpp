//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
//   const int ALPHABET_SIZE=26;
    
    struct TrieNode{
        struct TrieNode *children[26];
        int prefix_count[26];
        bool isEndOfWord;
        
    };
    
    struct TrieNode *getNode()
{
    struct TrieNode *pNode =  new TrieNode;
 
    pNode->isEndOfWord = false;
 
    for (int i = 0; i < 26; i++)
        pNode->children[i] = NULL;
        
    for (int i = 0; i < 26; i++)
        pNode->prefix_count[i] = 0;
 
    return pNode;
}

void insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index]){
            pCrawl->children[index] = getNode();
            
        }
         
        pCrawl->prefix_count[index]=pCrawl->prefix_count[index]+1;
        // cout<<key[i]<<" "<< pCrawl->prefix_count[index]<<endl;
        pCrawl = pCrawl->children[index];
        
    }
    // cout<<"--------------------"<<endl;
 
    // mark last node as leaf
    pCrawl->isEndOfWord = true;
}
 
// Returns true if key presents in trie, else
// false
int prefix(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
    int ans=0;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            return false;
        ans=pCrawl->prefix_count[index];
        pCrawl = pCrawl->children[index];
        
    }
 
    return ans;
}
    
public:
    int klengthpref(string arr[], int n, int k, string str){    
         struct TrieNode *root = getNode();
          for (int i = 0; i < n; i++)
            insert(root, arr[i]);
            
            return prefix(root,str.substr(0,k));
 
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends