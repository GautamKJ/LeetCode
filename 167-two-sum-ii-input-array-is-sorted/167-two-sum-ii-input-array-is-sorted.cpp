class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     
        int ptr1=0,ptr2=numbers.size()-1;
        vector<int>res;
        while(ptr1<ptr2){
            int sum=numbers[ptr1]+numbers[ptr2];
            if(sum==target){
                res.push_back(ptr1+1);
                res.push_back(ptr2+1);
                return res;
            }
            else if(sum>target){
                ptr2--;
            }
            else
                ptr1++;
                
        }
        return res;
    }
};