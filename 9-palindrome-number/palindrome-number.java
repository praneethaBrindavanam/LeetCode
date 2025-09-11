class Solution {
    public boolean isPalindrome(int x) {
        int r;
        int rev=0;
        int t=x;
        while(x>0){
            r=x%10;

            rev=rev*10+r;
            x/=10;
        }
        return rev==t;
    }
}
        
    
