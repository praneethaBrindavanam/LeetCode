class Solution {
public:
    int trailingZeroes(int n) {
        int fact=0;
        while(n>0){
            n/=5;
            fact+=n;
        }
    return fact;
    }
};