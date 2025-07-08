class Solution {
public:
    int maxProduct(int n) {
        int a=INT_MIN ,  b=INT_MIN;
        
        while(n>0){
            int r;
            r=n%10;
            if(r>=a){
                b=a;
                a=r;
            } else if(r>b){
                b=r;
            }
             n/=10;
        }
        return a*b;
        
    }
};