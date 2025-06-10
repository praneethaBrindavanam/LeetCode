class Solution {
    public int maxDifference(String s) {
        int[] freq = new int[26];

    
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            freq[c - 'a']++;
        }

        int maxOdd = Integer.MIN_VALUE;
        int minEven = Integer.MAX_VALUE;

        
        for (int i = 0; i < 26; i++) {
            int count = freq[i];

            if (count > 0) {
                if (count % 2 == 1) { 
                    if (count > maxOdd) {
                        maxOdd = count;
                    }
                } else { 
                    if (count < minEven) {
                        minEven = count;
                    }
                }
            }
        }

        
        if (maxOdd == Integer.MIN_VALUE || minEven == Integer.MAX_VALUE) {
            return 0;
        }

        return maxOdd - minEven;
    }
}