class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> nums(n);
        for (int i=1;i<=n;i++){
            nums[i-1]=to_string(i);
        }
        for(int i=2;i<n;i+=3){
            nums[i]="Fizz";
        }
        for(int i=4;i<n;i+=5){
            nums[i]="Buzz";
        }
        for (int i=14;i<n;i+=15){
            nums[i]="FizzBuzz";
        }
        return nums;
    }
};