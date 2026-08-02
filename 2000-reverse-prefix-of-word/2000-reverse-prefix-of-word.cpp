class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        int x = -1;
       for(int i =0 ; i<word.size(); i++){
        st.push(word[i]);
        if(word[i]==ch) {x = i; break;}
       }
        if(x==-1) return word;
        string ans ="";
        while(!st.empty()){
            ans+= st.top();
            st.pop();
        }
        ans+= word.substr(x+1);
        return ans;
    }
};