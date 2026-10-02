import java.util.*;

class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> list = new ArrayList<>();

        generate(list, "", 0, 0, n);

        return list;
    }

    public void generate(List<String> list, String curr, int open, int close, int n) {

     
        if (open == n && close == n) {
            list.add(curr);
            return;
        }


        if (open < n) {
            generate(list, curr + "(", open + 1, close, n);
        }


        if (close < open) {
            generate(list, curr + ")", open, close + 1, n);
        }
    }
}