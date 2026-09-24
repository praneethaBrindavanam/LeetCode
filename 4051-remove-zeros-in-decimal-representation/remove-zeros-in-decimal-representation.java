class Solution {
    public long removeZeros(long n) {
        String st="";
        String s=Long.toString(n);
        for(int i=0;i<s.length();i++) {
            if(s.charAt(i)!='0'){
                st+=s.charAt(i);
            }
        }
        return Long.parseLong(st);
    }
}