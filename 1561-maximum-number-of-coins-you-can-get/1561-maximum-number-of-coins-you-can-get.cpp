class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        int tn = n/3;
        sort(piles.begin(),piles.end());
        int sum = 0;
        int i = n-2;
        while( i>=0 && tn >0){
            sum += piles[i];
            i=i-2;
            tn--;
        }
        return sum;
    }
};