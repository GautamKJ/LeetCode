class Twitter {
public:
    unordered_map<int,vector<int>>userList;
    list<pair<int,int>>post;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        post.push_front({userId,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int>res;
        list<pair<int,int>>temp=post;
        while(temp.size()>0 && res.size()<10){
            // cout<<temp.front().first<<endl;
            if(temp.front().first==userId || find(userList[userId].begin(),userList[userId].end(),temp.front().first)!=userList[userId].end())
                res.push_back(temp.front().second);            
                temp.pop_front();
        }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        userList[followerId].push_back(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
     vector<int>::iterator it;
       for (auto it = userList[followerId].begin(); it != userList[followerId].end(); ++it)
           if(*it==followeeId){
               userList[followerId].erase(it);
               return;
           }
     
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */