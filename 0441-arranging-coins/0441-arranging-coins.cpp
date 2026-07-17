class Solution {
public:
    int arrangeCoins(int n) {
        int i =1 , j =n , ans =0;
        while(i<=j){
            int mid = i+(j-i)/2;
            long long v = 1LL* mid *(mid+1)/2;
            if(v > n) j = mid-1;
            else {ans = mid ;
            i = mid+1;}
        }
        return ans;
    }
};