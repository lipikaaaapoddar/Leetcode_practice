class Solution {
public:
    bool checkGoodInteger(int n) {
        bool ans = false;
        int sum =0 ; int sqr=0;
        while(n>0){
            int d = n%10;
            sum +=d;
            sqr += d*d;
            n /=10;
        }
        if(sqr-sum >=50) ans = true;
        return ans;
    }
};