class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int , vector<int>, greater<int>> min_h;
        for(int i =0 ; i<nums.size(); i++){
            min_h.push(nums[i]);
        }
        vector<int> arr;
        int bob ;
        int alice;
        while(!min_h.empty()){
            alice = min_h.top();
            min_h.pop();
            bob = min_h.top();
            min_h.pop();
            arr.push_back(bob);
            arr.push_back(alice);
        }
       
        return arr;
    }
};