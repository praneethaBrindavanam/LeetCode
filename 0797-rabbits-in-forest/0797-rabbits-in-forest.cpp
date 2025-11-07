class Solution {
public:
    int numRabbits(vector<int>& answers) {
        sort(answers.begin(), answers.end());
        int n = answers.size(), result = 0;

        for (int i=0; i<n; i++) {
            int num = answers[i];
            int originalNum = answers[i];

            while (i+1<n && answers[i]==answers[i+1] && num>0) {
                i++;
                num--;
            }

            result += originalNum+1;
        }

        return result;
    }
};