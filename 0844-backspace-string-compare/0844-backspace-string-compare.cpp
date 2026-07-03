class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> t1;
        for(auto ch : s){
            if(ch=='#') {if( !s1.empty()) s1.pop();}
            else s1.push(ch);
        }
        for(auto ch : t){
            if(ch=='#') {if(!t1.empty()) t1.pop();}
            else t1.push(ch);
        }
        string s2 ="" , t2="";
        while( !s1.empty()){
            s2.push_back(s1.top());
            s1.pop();
        }
         while( !t1.empty()){
            t2.push_back(t1.top());
            t1.pop();
        }
        return s2 == t2 ? true : false;
    }
};