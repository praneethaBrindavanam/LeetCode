class Solution {
    public boolean validDigit(int n, int x) {
        String s = String.valueOf(n);
        char d = (char) (x + '0');

        if (s.charAt(0) == d)
            return false;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == d)
                return true;
        }

        return false;
    }
}