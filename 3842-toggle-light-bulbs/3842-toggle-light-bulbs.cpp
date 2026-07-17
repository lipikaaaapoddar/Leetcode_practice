class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
      vector<int> ans;
      unordered_map<int,int> mp;
      for(int num : bulbs) mp[num]++;
      for(auto x : mp){
        if(x.second %2 !=0) ans.push_back(x.first);
      }
      sort(ans.begin(),ans.end());
       return ans; 
    }
};