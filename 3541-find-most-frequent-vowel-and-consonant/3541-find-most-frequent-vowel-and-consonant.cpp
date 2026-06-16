class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;
        for(int i =0 ; i<s.size(); i++){
            mp[s[i]]++;
        }
        int max_v=0;
        int min_c = 0;
        for(auto x : mp){
            if(x.first == 'a' || x.first == 'e' || x.first == 'i' || x.first == 'o' || x.first == 'u'){
                max_v = max(max_v, x.second);
            }
            else min_c = max(min_c , x.second);
        }
        return max_v + min_c;
    }
};