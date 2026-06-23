class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans =0;
       string s1 = "";
       int i = s.size()-1;
       while(s[i]==' ') i--;
       while(i>=0){
            if(s[i]!=' ') ans++;
            else break;
            i--;
       }
        return ans;
    }
};