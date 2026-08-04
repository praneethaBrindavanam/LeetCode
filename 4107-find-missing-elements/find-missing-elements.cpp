class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn = nums[0], mx = nums[0];
        unordered_set<int> st;

       
        for (int num : nums) {
            mn = min(mn, num);
            mx = max(mx, num);
            st.insert(num);
        }

        
        vector<int> result;
        for (int i = mn + 1; i < mx; i++) {
            if (st.find(i) == st.end()) {
                result.push_back(i);
            }
        }

        return result;
    }
};