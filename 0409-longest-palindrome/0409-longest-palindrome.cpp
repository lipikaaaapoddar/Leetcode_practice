class Solution {
public:
    int longestPalindrome(string s) {
        int ans =0;
        unordered_map<char, int> mp;
        for(int i=0 ; i<s.length(); i++){
            mp[s[i]]++;
        }
        bool hasodd = false;
        for(auto it : mp){
            if(it.second % 2 ==0) {
                ans +=it.second;
            }
            else{
                ans +=it.second-1;
                hasodd = true;
            }
        }
        
        if(hasodd){
            ans++;
        }
        return ans;
    }
};