class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(256, -1); 
        int maxLength = 0, start = 0;
        for (int j = 0; j < s.size(); j++) {
            if (lastSeen[s[j]] >= start) {
                start = lastSeen[s[j]] + 1;
            }
            lastSeen[s[j]] = j; 
            maxLength = max(maxLength, j - start + 1);
        }
        return maxLength;
    }
};