class Solution {
public:
    int minimumSum(int num) {
        vector<int> rem;
        int n=num;
        while(n>0){
            rem.push_back(n%10);
            n/=10;
        }
        sort(rem.begin(),rem.end());
        int num1=rem[0]*10+rem[2];
        int num2=rem[1]*10+rem[3];
        return (num1+num2);
        
    }
};