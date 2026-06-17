class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // if total cost > total gas than cant form loop
        int g_sum = 0 , c_sum = 0; 
        for(int i =0 ;i<gas.size(); i++){
            g_sum += gas[i];
            c_sum += cost[i];
        } 
        if(c_sum > g_sum) return -1;
        else{
            int inx = 0, c_gas =0;
            for(int i =0 ;i <gas.size(); i++){
            c_gas += gas[i] - cost[i];
            if(c_gas <0){
                inx = i+1;
                c_gas =0;
            }
        } 
        return inx;
        }
    }
};