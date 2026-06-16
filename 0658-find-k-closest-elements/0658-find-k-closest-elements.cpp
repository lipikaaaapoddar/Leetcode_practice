class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        priority_queue<pair<int,int>> m_heap;
        for(int i : arr){
            m_heap.push({abs(i-x) , i});
            if(m_heap.size()>k) m_heap.pop();
        }
        while(!m_heap.empty()){
            ans.push_back(m_heap.top().second);
            m_heap.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};