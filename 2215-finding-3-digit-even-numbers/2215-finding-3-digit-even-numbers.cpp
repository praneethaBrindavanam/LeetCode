class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> result; 
        
        for (int i = 0; i < digits.size(); i++) {
            if (digits[i] == 0) continue; 
            
            for (int j = 0; j < digits.size(); j++) {
                if (i == j) continue; 
                
                for (int k = 0; k < digits.size(); k++) {
                    if (k == i || k == j) continue; 
                    
                    if (digits[k] % 2 == 0) { 
                        int number = digits[i] * 100 + digits[j] * 10 + digits[k];
                        result.insert(number); 
                    }
                }
            }
        }
        
        return vector<int>(result.begin(), result.end()); // Convert set to sorted vector
    }
};