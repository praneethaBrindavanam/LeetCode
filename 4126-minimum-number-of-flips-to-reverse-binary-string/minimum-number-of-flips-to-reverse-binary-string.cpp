class Solution {
public:

    string reverse(string st) {
        int s = 0 , e = st.size()-1;
        while(s < e) {
            swap(st[s++],st[e--]);
        }
        return st;
    }

    string bit(int n) {
        string st;
        while(n) {
            int bit = n&1;
            st.push_back(bit+'0');
            n>>=1;
        }
        return st;
    }
    
    int minimumFlips(int n) {
        string s = bit(n);
        string ans = reverse(s);
        int cnt = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ans[i]) cnt++;
        }
        return cnt;
    }
};