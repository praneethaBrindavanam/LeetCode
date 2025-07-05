class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int count=1;
        for(int i=n-1;i>0;i--){
            if(arr[i]==arr[i-1]) count++;
            else {
                if(count==arr[i]) return arr[i];
                else count =1;
            }
        }
        if(count==arr[0]) return arr[0];
        return -1;
    }
};