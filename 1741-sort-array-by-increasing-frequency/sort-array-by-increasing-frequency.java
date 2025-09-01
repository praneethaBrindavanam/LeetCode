class Solution {
    public int[] frequencySort(int[] nums) {
        int[]ans=new int[nums.length];
        HashMap<Integer,Integer> freq=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            freq.put(nums[i],freq.getOrDefault(nums[i],0)+1);//store the freq items
        }
        ArrayList<Integer>list=new ArrayList<>(freq.keySet());
        Collections.sort(list,(a,b)->{
            if(freq.get(a).equals(freq.get(b))){
                return b-a;
            }
            return freq.get(a)-freq.get(b);
        });
        int k=0;
        for(Integer num:list){
            int count=freq.get(num);
            while(count>0){
                ans[k++]=num;
                count--;
            }
        }
        return ans;
        
    }
}