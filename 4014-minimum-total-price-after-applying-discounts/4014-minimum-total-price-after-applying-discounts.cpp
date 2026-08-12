class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int i = prices.size()-1;
        int j = discounts.size()-1;
        double t =0;
        while(j>=0 && i>=0){
            t += ((prices[i]*(100-discounts[j]))/100.0);
            j--;
            i--;
        }
        while(i>=0){
            t += prices[i];
            i--;
        }
        return t;
    }
};