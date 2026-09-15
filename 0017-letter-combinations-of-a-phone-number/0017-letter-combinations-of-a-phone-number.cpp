class Solution {
public:
    vector<string> ans;
    string p;
    void solve(int idx, string &digits, vector<string> &mp){
        if(idx == digits.size()) {
            ans.push_back(p);
            return ;
        }
        string letters = mp[digits[idx]-'0'];
        for(char ch : letters){
            p.push_back(ch);
            solve(idx+1, digits , mp);
            p.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> mp ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0, digits, mp);
        return ans;
    }
};