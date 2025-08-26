class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea=0,maxDia=0;
        for(int i=0;i<dimensions.size();i++){
            int l=dimensions[i][0];
            int w=dimensions[i][1];
            int dia=l*l+w*w;
            if(dia>maxDia||(dia==maxDia && l*w>maxArea)){
                maxDia=dia;
                maxArea=l*w;
            }
        }
        return maxArea;
 
    }
};