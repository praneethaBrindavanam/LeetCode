class Solution {
    public char kthCharacter(int k) {
        int num=k-1;
        int count=0;
        while (num > 0) {
            if ((num & 1) == 1) {
                count++;
            }
             num = num >> 1; 
        }
         return (char) ('a' + count);
    }
}