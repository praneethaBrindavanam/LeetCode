class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
     int i,j; 
     int n=arr.size();
       for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        if(i!=j && arr[i]==2*arr[j])
        return true;
       }
       return false;
    }
};
