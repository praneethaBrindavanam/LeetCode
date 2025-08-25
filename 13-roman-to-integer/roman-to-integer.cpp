class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int n=s.length();
        unordered_map<int , int > r={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0;i<n-1;i++){
            if(r[s[i]]<r[s[i+1]]){
                ans-=r[s[i]];
            } else {
                ans+=r[s[i]];
            }
        }
        return ans+r[s[n-1]];
        
    }
};