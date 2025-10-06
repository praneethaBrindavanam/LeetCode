class Solution {
public:
    string thousandSeparator(int n) {
        string s=to_string(n),st;
        for(int i=0;i<s.size();i++){
            if(i>0 && (s.size()-i)%3==0)
                st+=".";
            st+=s[i];
        
        }
        return st;
        
    }
};