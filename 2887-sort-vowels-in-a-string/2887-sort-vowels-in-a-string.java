class Solution {
    public String sortVowels(String s) {

        int[] upper=new int[26];
        int [] lower=new int[26];
        for(char ch:s.toCharArray()){
            if(ch=='A'|| ch=='E'|| ch=='I'||ch=='O'||ch=='U'){
                upper[ch-'A']++;//frequency
            }
        }
        for(char ch:s.toCharArray()){
            if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u'){
                lower[ch-'a']++;//frequency
            }
        }
        StringBuffer sb=new StringBuffer();
        for(int i=0;i<26;i++){
            while(upper[i]>0){
                sb.append((char)(i+'A'));
                upper[i]--;
            }
        }
       for(int i=0;i<26;i++){
            while(lower[i]>0){
                sb.append((char)(i+'a'));
                lower[i]--;
            }
        }
        StringBuilder res=new StringBuilder();
        int i=0;
        for(char ch : s.toCharArray())
        {
            if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                res.append(sb.charAt(i++));
            }
            else
            {
                res.append(ch);
            }
        }
        return res.toString();





        
    }
}