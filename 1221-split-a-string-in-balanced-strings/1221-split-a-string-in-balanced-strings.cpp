class Solution {
public:
    int balancedStringSplit(string s) {
        int ans =0 , balance=0;
        for(auto c:s){
            if(c=='L') balance+=1;
            else balance-=1;
            if(balance==0) ans+=1;
        }
        return ans;
    }
};