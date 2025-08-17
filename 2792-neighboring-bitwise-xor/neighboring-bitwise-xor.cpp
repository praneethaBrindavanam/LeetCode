class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int sum=0;
        int n=derived.size();

        for(int i=0;i<n;i++)
            sum ^=derived[i];
        return sum==0;

        
        
        
        
    }
};