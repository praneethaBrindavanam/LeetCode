class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> up, up1;
        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i], c2 = t[i];

        
            if (up.count(c1) && up[c1] != c2) return false;
            if (up1.count(c2) && up1[c2] != c1) return false;

    
            up[c1] = c2;
            up1[c2] = c1;
        }
        return true;
    }
};
