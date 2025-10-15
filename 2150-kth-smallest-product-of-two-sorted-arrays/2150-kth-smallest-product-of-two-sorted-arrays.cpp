class Solution{
public:
    long long countLE(long long x, const vector<int>& A, const vector<int>& B){
        long long count = 0;
        int n = B.size();

        if(x >= 0){
            int jPos = n - 1;
            int jNeg = n - 1;

            for(int a : A){
                if(a > 0){
                    while(jPos >= 0 && 1LL * a * B[jPos] > x){
                        jPos--;
                    }
                    count += jPos + 1;
                }
                else if(a == 0){
                    count += n;
                }
                else{
                    while(jNeg >= 0 && 1LL * a * B[jNeg] <= x){
                        jNeg--;
                    }
                    count += n - 1 - jNeg;
                }
            }
        }
        else{
            int jPos = 0;
            int jNeg = 0;

            for(int a : A){
                if(a > 0){
                    while(jPos < n && 1LL * a * B[jPos] <= x){
                        jPos++;
                    }
                    count += jPos;
                }
                else if(a == 0){
                    continue;
                }
                else{
                    while(jNeg < n && 1LL * a * B[jNeg] > x){
                        jNeg++;
                    }
                    count += n - jNeg;
                }
            }
        }

        return count;
    }
    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
        if(nums1.size() > nums2.size()){
            return kthSmallestProduct(nums2, nums1, k);
        }

        long long lo = -1e10;
        long long hi = 1e10;

        while(lo < hi){
            long long mid = lo + (hi - lo) / 2;
            long long cnt = countLE(mid, nums1, nums2);

            if(cnt < k){
                lo = mid + 1;
            }
            else{
                hi = mid;
            }
        }

        return lo;
    }
};