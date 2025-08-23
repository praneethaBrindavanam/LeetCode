class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int i=left;i<=right;i++){
            int num=i;
            bool self=true;
            while(num){
                int r=num%10;
                if(r==0 || i%r){
                    self=false;
                    break;
                }
                num/=10;
            }
            if(self) res.push_back(i);
        }
        return res;
        
    }
};