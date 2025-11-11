class Solution {
public:
    int reachNumber(int target) {
        
        int i = 0;
        int currPos = 0;

        if (target < 0){target = -1*target;}
        if (target == 0){return 0;}
        
        while (true){
            if ((currPos >= target) && ((currPos - target) % 2 == 0)){return i;}
            i++;
            currPos += i;
            
        }
    }
};