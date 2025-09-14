class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        ArrayList <Integer> t=new ArrayList<Integer>();
        for(int i=0;i<nums1.length;i++){
            for(int j=0;j<nums2.length;j++){
                if(nums1[i]==nums2[j])
                {
                    t.add(nums1[i]);
                    nums2[j]=-1;
                    break;
                }
            }
        }
            int result[]=new int[t.size()];
            for(int k=0;k<result.length;k++){
                 result[k]=t.get(k);
            }
        
        return result;
    }
}