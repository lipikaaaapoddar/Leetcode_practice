class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st;
        for(char c : allowed){
            st.insert(c);}
            
        int ch = 0;
        for(string &w : words){
            for(char c : w){
                if(st.count(c)==0) {
                    ch++; 
                    break;} }
        }
        return words.size() - ch;
    }
};