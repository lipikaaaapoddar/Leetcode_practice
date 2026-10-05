class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans =0, c = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') ++c;
            else {
                --c;
                if (s[i - 1] == '(') ans += 1 << c;
            }
        }
        return ans;
    }
};