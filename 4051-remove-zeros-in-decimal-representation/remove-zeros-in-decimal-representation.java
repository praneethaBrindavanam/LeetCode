class Solution {
    public long removeZeros(long n) {
        long temp=n;
        long result=0;
        long reverse=0;
        while(temp>0){
            if(temp%10!=0){
                result=result*10+temp%10;
            }
            temp/=10;
        }
        while(result > 0){
            reverse = reverse * 10 + result % 10;
            result /= 10;
        }
        return reverse;
    }
}