class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        if(x+y<z)
            return false;
        queue<int>q;
        int dir[]={x,-x,y,-y};
        unordered_map<int,int>visited;
        visited[0]=1;
        q.push(0);
        
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            if(temp==z)
                return true;
            for(int d:dir){
                int total=temp+d;
                if(total==z)
                    return true;
                if(total<0 || total>x+y)
                    continue;
                if(visited.find(total)==visited.end()){
                    visited[total]=1;
                    q.push(total);
                    
                }
            }
            
                
        }
            return false;
        
    }
};