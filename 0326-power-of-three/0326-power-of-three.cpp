class Solution {
public:
    bool isPowerOfThree(int n) {
        
        // for(int i=0;i<1000;i++){
        //     if(pow(3,i)==n){
        //         return true;
        //     }
        // }
        if(n<=0) return false;
        while(n%3==0){
            n/=3;
        }
        return n==1 ;
        
    }
   
};
