class Solution {
public:
    int compress(vector<char>& chars) {
        int i =0 , k=0;
        while(i<chars.size()){
            int j =i;
            while(j<chars.size() &&chars[i]==chars[j]) j++;

            int cnt = j-i;
            chars[k++] = chars[i];

            if(cnt > 1) {
                string s = to_string(cnt);
                for(char c : s)
                    chars[k++] = c;
            }
            i = j;
        }
        return k;    
    }
};