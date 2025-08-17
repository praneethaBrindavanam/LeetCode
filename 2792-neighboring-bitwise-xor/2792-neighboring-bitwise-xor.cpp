class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int sum=0;
        for(int d:derived)
        sum^=d;
        return sum==0;
        
        
    }
};