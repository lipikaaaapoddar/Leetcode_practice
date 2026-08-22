class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0; 
        int prod = 1;
        int n1=n;
        while(n1>0){
            int d = n1 %10;
            sum +=d;
            prod*=d;
            n1/=10;
        }
        return n % (sum+prod)== 0;
    }
};