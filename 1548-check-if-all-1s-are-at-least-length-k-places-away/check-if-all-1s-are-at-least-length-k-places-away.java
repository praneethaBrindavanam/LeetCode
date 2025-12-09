class Solution {
    public boolean kLengthApart(int[] nums, int k) {
        boolean flag = true;
        boolean triggered = false;
        int distance=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1){
                if(!triggered){
                    triggered=true;
                    distance=0;
                } 
                else{
                    if(distance < k){
                        return false;
                    }else{
                        distance=0;
                    }     
                }  
            }else{
                distance++;
            }
        }
        return flag;
    } 
}