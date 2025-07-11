class Solution {
    public String sortSentence(String s) {
        String [] s1=s.split(" ");
        String [] s2=new String [s1.length];
        for(String s3:s1){
            int l=s3.length();
            int index=s3.charAt(l-1)-'0';
            s2[index-1]=s3.substring(0,l-1);
        }
        return String.join(" ",s2);
    }
}