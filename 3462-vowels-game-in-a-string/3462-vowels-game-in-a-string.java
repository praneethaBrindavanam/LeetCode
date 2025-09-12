class Solution {
    public boolean doesAliceWin(String s) {
        int vowelCount=0;
        String vowels="aeiou";
        for (char ch : s.toCharArray()) {
            if (vowels.indexOf(ch) != -1) {  
                vowelCount++;
            }
        }

        if (vowelCount == 0) return false;
        return true;
        
    }
}