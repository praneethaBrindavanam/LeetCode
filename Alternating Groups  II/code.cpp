class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        //colors[i]==0 is red
        //colors[i]==1 is blue
        int n=colors.size();
        int count=0;
        int left=0;

        for(int i=0;i<n+k-1;i++){
            if(i>0 && colors[i%n]==colors[(i-1)%n]){
                left=i;
            }
            if(i-left+1>=k){
                count++;
            }
        }
        return count;
    }
};
