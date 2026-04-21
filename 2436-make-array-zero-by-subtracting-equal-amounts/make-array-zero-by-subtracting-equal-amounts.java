class Solution {
    public int minimumOperations(int[] nums) {
        Set<Integer> st=new HashSet<>();
        for(int num:nums) {
            if(num >0) {
                st.add(num);
            }
        }
        return st.size();
    }
}