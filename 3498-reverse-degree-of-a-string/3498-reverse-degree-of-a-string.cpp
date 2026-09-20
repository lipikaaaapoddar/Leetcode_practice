class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i=0; i<s.length(); i++){
            int x = 26 - (s[i] - 'a');
            int p = x * (i+1);
            ans = ans + p;
        }
        return ans;
    }
};