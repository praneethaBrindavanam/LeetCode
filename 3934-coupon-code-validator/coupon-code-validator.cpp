class Solution {
public:

    bool isValid(string s) {
        if(s == "") return false;
        for(auto ch : s) {
            if( !((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch <='9') || ch == '_') ) return false;
        }

        return true;
    }

    bool isValidBC(string s) {
        if(s == "electronics" || s == "grocery" || s == "pharmacy" || s == "restaurant") return true;
        return false;
    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        map<string,vector<string>> cs;

        int n = code.size();

        vector<string>validCodes;

        for(int i=0; i<n; i++) {
            if(isValid(code[i]) && isValidBC(businessLine[i]) && isActive[i]) {
                cs[businessLine[i]].push_back(code[i]);
            }
        }

        for(auto &x : cs) {
            sort(x.second.begin(),x.second.end());
            for(auto &c : x.second) {
                validCodes.push_back(c);
            }
        }

        return validCodes;
    }
};