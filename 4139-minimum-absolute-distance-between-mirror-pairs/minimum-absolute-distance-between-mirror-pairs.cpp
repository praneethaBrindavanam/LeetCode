class Solution {
    int find(int num)
    {
        while(num%10 == 0)
            num /= 10;
        string n = to_string(num);
        reverse(n.begin(), n.end());
        return stoi(n);
    }
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++)
        {
            if(mp.count(nums[i]))
                ans = min(ans, abs(i - mp[nums[i]]));
            int reverseNum = find(nums[i]);
            mp[reverseNum] = i;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};