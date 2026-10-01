class Solution {
public:
     bool allZero(vector<int>& cnt){
        for(int i:cnt) if(i != 0) return false;
        return true;
    }
    vector<int> findAnagrams(string txt, string pat) {
         int n = txt.length();
        vector<int> cnt(26,0);
        for(int i=0; i<pat.length(); i++) {
            char ch = pat[i];
            cnt[ch - 'a']++;
        }
        int i=0, j=0;
        vector<int> ans;
        int k = pat.length();
        while (j < n) {
            cnt[txt[j] - 'a']--;
            if (j - i + 1 < k) j++;
            else if (j - i + 1 == k) {
                if (allZero(cnt))
                ans.push_back(i);
                cnt[txt[i] - 'a']++;
                i++;
                j++;
            }
        }
        return ans;  
    }
};