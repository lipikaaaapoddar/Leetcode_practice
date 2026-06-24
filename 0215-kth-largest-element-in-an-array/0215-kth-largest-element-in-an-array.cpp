class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> m_heap;
        for(auto x : nums){
            m_heap.push(x);
        }
        int ans;
        while(k>0){
            ans = m_heap.top();
            m_heap.pop();
            k--;
        }
        return ans;
    }
};