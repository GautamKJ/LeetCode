//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  Node *t_node=NULL;
  void find(Node *root,int t,unordered_map<Node *,Node *>&parent)
  {
      if(root==NULL)
        return ;
        
    if(root->data==t)
        t_node=root;
    
    if(root->left)
       { parent[root->left]=root;
       find(root->left,t,parent);
       }
    
   if(root->right)
       { parent[root->right]=root;
       find(root->right,t,parent);
       }
        
        
  }
  int solve(Node *root,unordered_map<Node *,Node *>&parent)
  {
      if(root==NULL)
        return 0;
        
    unordered_map<Node*,int>vis;
    
    queue<pair<Node*,int>>q;
    
    q.push({root,0});
    vis[root]=1;
    
    int time=0;
    while(!q.empty())
    {
        auto temp=q.front();
        q.pop();
        Node *t=temp.first;
        time=temp.second;
        
        if(t->left && vis[t->left]==0)
        {
            q.push({t->left,time+1});
            vis[t->left]=1;
        }
        
        if(t->right && vis[t->right]==0)
        {
            q.push({t->right,time+1});
            vis[t->right]=1;
        }
        
        Node *p=parent[t];
        
        if(p!=NULL & vis[p]==0)
        {
            q.push({p,time+1});
            vis[p]=1;
        }
        
    }
    
    return time;
    
    
    
  }
    int minTime(Node* root, int target) 
    {
        unordered_map<Node *,Node *>parent;
        parent[root]=NULL;
        find(root,target,parent);
        
        return solve(t_node,parent);
        
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends