class Solution {
    public boolean checkTwoChessboards(String coordinate1, String coordinate2) {
        //alernative color are same 
        //c[1]==c[3]
        int s1= (coordinate1.charAt(0)-'a') +(coordinate1.charAt(1)-'0');
        int s2= (coordinate2.charAt(0)-'a') +(coordinate2.charAt(1)-'0');
        return s1%2==s2%2;
    }
}