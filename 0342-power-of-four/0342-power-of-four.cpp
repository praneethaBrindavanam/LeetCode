class Solution {
public:
    bool isPowerOfFour(int n) { 
    //   for(int i=0;i<1000;i++)
    //   if(pow(4,i)==n){
    //     return true;
    //   }
    //   return false;  
    // }
    if(n<=0) return false;
    while(n%4==0){
        n/=4;
    }
    return n==1;
    }
    
};