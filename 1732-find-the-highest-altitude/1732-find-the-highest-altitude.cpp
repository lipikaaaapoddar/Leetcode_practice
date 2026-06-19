class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude =0;
        int max_n = 0;
        for(int i =0 ; i<gain.size(); i++){
            altitude += gain[i];
            max_n = max(max_n , altitude) ;
        }
        return max_n;
    }
};