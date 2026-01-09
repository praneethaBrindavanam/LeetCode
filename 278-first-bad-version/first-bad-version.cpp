// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 2){
            if(isBadVersion(1))
            return 1;
            else
            return 2;
        }

        long long int l = 1 , r = n , mid;
        while(l<=r){
            mid = (l+r)/2;
            if(mid == 1)
            return 1;
            else if(mid == n)
            return n;
            else if(isBadVersion(mid) && !isBadVersion(mid-1))
            return mid;
            else if(isBadVersion(mid))
            r = mid-1;
            else
            l = mid+1;
        }
        return -1;
    }
};