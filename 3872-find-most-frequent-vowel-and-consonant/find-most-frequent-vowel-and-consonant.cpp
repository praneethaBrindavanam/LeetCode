class Solution {
public:
    int maxFreqSum(string s) {
        string k="aeiou";
       unordered_map<char,int>n;
       int vow=0;
       int odd=0;
       for(int i:s){
        n[i]++;
       }
      for(auto it:n){
        if(k.find(it.first)==string::npos){
            vow=max(vow,it.second);
        }else{
            odd=max(odd,it.second);
        }
      }
      return vow+odd;
    }
};