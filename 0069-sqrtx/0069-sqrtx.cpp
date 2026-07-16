class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        long long s = 0 , e = x/2 , ans =-1;
        while(s<=e){
            long long mid = s +(e-s)/2;
            if(mid*mid == x) return mid;
            else if (mid*mid > x )
             e = mid - 1;
             else {
                ans = mid;
                s = mid +1;
             }
        }
        return ans;
    }
};