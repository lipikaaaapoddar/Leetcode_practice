class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        if(target <= startFuel) return 0;
    
        priority_queue <int> pq;
        int i =0 , stop=0;
        int fuel = startFuel;
        int n = stations.size();

        while(fuel < target){
            while(i<n && stations[i][0]<=fuel){
                pq.push(stations[i][1]);
                i++;
            }
            if(pq.empty()) return -1;
            fuel += pq.top();
            pq.pop();
            stop++;
        }
        return stop;
    }
};