class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int pos = candyType.size()/2;
        set <int> st;
        for(auto a : candyType){
            st.insert(a);
        }
        if(st.size()>= pos) return pos;
        return st.size();
    }
};