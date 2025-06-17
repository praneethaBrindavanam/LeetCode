class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        if(sum%3!=0)return false;
        sum/=3;
        int k=0,t=0;
        for(int i=0;i<arr.size();i++)
        {
            k+=arr[i];
            if(k==sum)
            {
                t++;
                
                k=0;
            }   
        }
        return t>=3;
    }
};