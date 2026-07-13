class Solution {
public:
    int minimumSum(int num) {
        vector<int> d;
        while(num>0){
            d.push_back(num%10);
            num/=10;
        }
        sort(d.begin(),d.end());
        int i =0 ; 
        int j = d.size()-1;
        int sum =0;
        while(i<j){
            int num = d[i]*10+ d[j];
            sum +=num;
            i++;
            j--;
        }
        return sum;
    }
};