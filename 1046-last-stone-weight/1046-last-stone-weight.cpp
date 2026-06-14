class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_h(stones.begin(), stones.end());
        while(max_h.size() > 1){
            int y = max_h.top();
            max_h.pop();
            int x = max_h.top();
            max_h.pop();
            if(x!=y){
                max_h.push(y-x);}
        }
        return max_h.empty() ? 0 : max_h.top();
    }
};