class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one =0;
        for(char ch : s){
            if(ch =='1') one++;
        }
        int zero = s.size()-one;
        string ans;
        ans.append(one-1,'1');
        ans.append(zero,'0');
        ans.push_back('1');
        return ans;
    }
};