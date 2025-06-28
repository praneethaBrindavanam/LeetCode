class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int length = 0;
        bool odd_found = false;

        for (auto [ch, count] : freq) {
            length += (count / 2) * 2;  // Add even part
            if (count % 2 == 1) {
                odd_found = true;
            }
        }

        if (odd_found) {
            length += 1; 
        }

        return length;
    }
};
