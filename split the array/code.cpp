class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> freq;
        
    
        for (int num : nums) {
            freq[num]++;
            if (freq[num] > 2) return false; 
        }
        
        return true;
    }
};

