class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i=0;i<=num;i++){
            int n=i;
            int rev=0;
            while(n){
                int r=n%10;
                rev=rev*10+r;
                n/=10;
            }
            if(rev+i==num){
                return true;
            }
        }
        return false;

        
    }
};