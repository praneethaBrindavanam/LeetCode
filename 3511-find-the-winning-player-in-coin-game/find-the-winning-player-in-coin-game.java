class Solution {
    public String winningPlayer(int x, int y) {
       int z=Math.min(x,y/4);
       return (z % 2==1) ? "Alice" : "Bob";
    }
}