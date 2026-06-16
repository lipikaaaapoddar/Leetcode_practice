class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for(auto x : s){
            if (x == '*'){
                if(!ans.empty())
                ans.pop_back();
            }
            else if (x == '#'){
                ans = ans + ans;
            }
            else if (x == '%'){
                reverse(ans.begin(),ans.end());
            }
            else ans.push_back(x);
        }
        return ans;
    }
};