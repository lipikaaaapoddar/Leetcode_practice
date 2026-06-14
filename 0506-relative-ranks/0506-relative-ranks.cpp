class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> max_h ;
        vector<string> ans(score.size());
        int rank =1;
        for(int i =0 ; i<score.size() ; i++){
            max_h.push({score[i],i});
        }
        while(!max_h.empty()){
            int index = max_h.top().second;
            max_h.pop();

            if(rank == 1) ans[index] = "Gold Medal";
            else if (rank == 2 ) ans[index] = "Silver Medal";
            else if (rank == 3 ) ans[index] = "Bronze Medal";
            else ans[index] = to_string(rank);
            rank++;
        }
        return ans;

    }
};