class Solution {
    public int countVowelSubstrings(String word) {
        int answer = 0;
        String vowels = "aeiou";
        for (int start = 0; start < word.length(); start++) {
            Set<Character> seen = new HashSet<>();
            for (int end = start; end < word.length(); end++) {
                char ch = word.charAt(end);
                if (vowels.indexOf(ch) == -1) {
                    break;
                }
                seen.add(ch);
                if (seen.size() == 5) {
                    answer++;
                }
            }
        }
        return answer;
    }
}