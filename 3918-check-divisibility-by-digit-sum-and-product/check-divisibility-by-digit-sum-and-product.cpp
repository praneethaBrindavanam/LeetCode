class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0;
        int p=1;
        int temp=n;
        while (temp>0){
            int r;
            r=temp%10;
            s+=r;
            p*=r;
            temp/=10;
        }
        if(n%(s+p)==0) return true;
      return false;  
    }
};