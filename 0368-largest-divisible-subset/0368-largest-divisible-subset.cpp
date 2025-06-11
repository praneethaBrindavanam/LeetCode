class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); 

        vector<int> count(n); 
        vector<int> next(n); 

        int maxi = 0;          

       
        for (int i = n - 1; i >= 0; i--) {
            count[i] = 1;      
            next[i] = -1;     

            
            for (int j = i + 1; j < n && n - j + 1 > count[i]; j++) {
                if (nums[j] % nums[i] != 0) continue;

                if (count[j] + 1 > count[i]) {
                    count[i] = count[j] + 1;
                    next[i] = j;
                }
            }

           
            if (count[maxi] < count[i]) {
                maxi = i;
            }
        }

      
        vector<int> answer;
        int i = maxi;
        while (i != -1) {
            answer.push_back(nums[i]);
            i = next[i];
        }

        return answer;
    }
};