class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st;
        for(auto c : allowed){
            st.insert(c);
        }
        int c = 0;
        for(auto w : words){
            bool ok = true;
            for(char c : w){
                if(st.count(c)==0) {
                    ok = false; 
                    break;} }
            if(ok) c++;
        }
        return c;
    }
};