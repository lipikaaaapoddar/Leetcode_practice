class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int i =0;
        int count_5 =0 , count_10 = 0, count_20 =0;
        while(i< bills.size()){
            if(bills[i]==5){
                count_5++;
                i++;
            }
            else if(bills[i]==10){
                if(count_5 > 0){
                count_5--;
                count_10++;
                i++;}
                else return false;
            }
            else {
              if(count_10 >0 && count_5>0){
                count_5--;
                count_10--;
                count_20++;
                i++;
              }
              else if(count_5>=3){
                count_5 -=3;
                i++;
                count_20++;
              }
              else return false;
            }
        }
    return true;
    }
};