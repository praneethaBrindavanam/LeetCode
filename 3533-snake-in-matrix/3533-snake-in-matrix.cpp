class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0, j = 0;
        for(int k = 0; k < commands.size(); k++){
            if(commands[k] == "RIGHT") j++;
            else if(commands[k] == "LEFT") j--;
            else if(commands[k] == "UP") i--;
            else if(commands[k] == "DOWN") i++;
        }
        return (i * n) + j;
    }
};