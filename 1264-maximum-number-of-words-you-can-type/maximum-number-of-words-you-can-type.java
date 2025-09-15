class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        Set<Character> broken =new HashSet<>();
        for(char ch:brokenLetters.toCharArray()){
            broken.add(ch);
        }
        String [] words=text.split(" ");
        int count=0;
        for(String str:words){
            boolean isBroken=false;
            for( char ch:str.toCharArray()){
                if(broken.contains(ch)){
                    isBroken=true;
                    break;
                }
            }
            if(!isBroken ) count++;

        }
        return count;
    }
}