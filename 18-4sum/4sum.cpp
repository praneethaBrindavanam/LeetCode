class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i!=0 && nums[i]==nums[i-1]){continue;
            }
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && nums[j]==nums[j-1]){continue;
                }
                for(int k=j+1;k<n;k++){
                    if(k!=j+1 && nums[k]==nums[k-1]){continue;
                    }
                        for(int m=k+1;m<n;m++){
                            if(m!=k+1 && nums[m]==nums[m-1]){continue;
                            }
                            long long req=nums[i];
                            req+=nums[j];
                            req+=nums[k];
                            req+=nums[m];
                            if(req==target){
                                ans.insert({nums[i],nums[j],nums[k],nums[m]});
                            }
                    }
                }
            }
        }
        vector<vector<int>> final(ans.begin(),ans.end());
        return final;
    }
};