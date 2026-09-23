class Solution {
    public int getLeastFrequentDigit(int n) {
        int[] freq = new int[10];
        while (n > 0) {
            int digit = n % 10;  
            freq[digit]++;       
            n = n / 10;          
        }
        int minFreq = Integer.MAX_VALUE;
        int answer = 0;

        for (int i = 0; i <= 9; i++) {
            if (freq[i] > 0 && freq[i] < minFreq) {
                minFreq = freq[i];
                answer = i;
            }
        }

        return answer;
    }
}