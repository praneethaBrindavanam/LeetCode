class Solution {
public:
    string shortestPalindrome(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        while(j>=0){
            if(s[i]==s[j]){
                i++;
            }
            j--;
        }
        string str=s.substr(i);
        if(str.length()==0){
            return s;
        }
        string revStr=str;
        reverse(revStr.begin(),revStr.end());
        return revStr+shortestPalindrome(s.substr(0,i))+str;
        
    }
};