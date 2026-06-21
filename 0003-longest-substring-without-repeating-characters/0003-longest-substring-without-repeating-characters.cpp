class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j =0, ans =0;
        unordered_map<char,int> mp;
        for(int i =0 ; i<s.size(); i++){
            mp[s[i]]++;
            while(mp[s[i]]>1){
                mp[s[j]]--;
                j++;
            } 
            ans = max(ans , i-j+1);
        }
        return ans;
    }
};