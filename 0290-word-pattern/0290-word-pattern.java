class Solution {
    public boolean wordPattern(String pattern, String s) {
        String []word=s.split(" ");
        if(pattern.length()!=word.length) return false;
        HashMap<Character, String> map=new HashMap<>();
        HashSet<String> used = new HashSet<>();
        for(int i=0;i<pattern.length();i++){
            char ch=pattern.charAt(i);
            String w=word[i];
            if(map.containsKey(ch)){
                if(!map.get(ch).equals(w)) return false;
            } else {
                if(used.contains(w)) return false;
                map.put(ch,w);
                used.add(w);
            }
        }
        return true;
    }
}