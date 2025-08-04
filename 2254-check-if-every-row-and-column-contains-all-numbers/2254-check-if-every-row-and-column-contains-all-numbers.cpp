class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            vector<bool> row(n+1,false),col(n+1,false);
            for(int j=0;j<n;j++){
                int r=matrix[i][j],c=matrix[j][i];
                if(r>n || c>n || row[r] || col[c])
                return false;
                row[r]=col[c]=true;
                
            }
        }
        return true;
    }
};