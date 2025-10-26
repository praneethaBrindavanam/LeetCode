
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int, int> mp;
        
        
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        
        vector<vector<int>> containers(n + 1);
        
       
        for (auto it = mp.begin(); it != mp.end(); it++) {
            containers[it->second].push_back(it->first);
        }
        
        vector<int> ans;
        
        
        for (int i = n; i >= 0; i--) {
            if (ans.size() >= k) {
                break;
            }
            if (!containers[i].empty()) {
                ans.insert(ans.end(), containers[i].begin(), containers[i].end());
            }
        }
        
        return ans;
    }
};