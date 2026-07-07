class Solution {
public:
    long long sumAndMultiply(int n) {
        int a = n;
        long long x = 0, sum =0;
        while(a>0){
            int d = a % 10;
            if (d != 0) {
                x = x*10 +d;
                sum += d;
            }
            a/=10;
        }
        long long rev =0;
        while(x>0){
            rev = rev *10 + x%10;
            x/=10;
        }
        x = rev;
        return x* sum;
    }
};