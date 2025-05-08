class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        vector<string> ans;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    size_t pos = words[j].find(words[i]);
                    if (pos < words[j].size()) { // valid index if found
                        ans.push_back(words[i]);
                        break;
                    }
                }
            }
        }

        return ans;
    }
};
