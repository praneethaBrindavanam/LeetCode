class Solution {
public:
    bool is_prime(int n){
        if(n<2) return 0;

        for(int i=2;i*i<=n;i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    int largestPrime(int n) {
        int ans=2;
        int x=3;
        int res=2;
        
        if(n==1) return 0;
        while(ans <= n){
            if(is_prime(ans)) res = max(res,ans);

            if(is_prime(x)) ans += x;
            x++;
        }
        return res;
    }
};

