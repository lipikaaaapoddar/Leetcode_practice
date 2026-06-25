class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score =0 , ans=0, i =0 , j = tokens.size()-1;
        sort(tokens.begin(), tokens.end());
        while(i<=j){
            if(power >= tokens[i] )
            {power -= tokens[i];
            score += 1;
            ans = max(ans, score);
            i++;}
            else if (score >=1)
            {power += tokens[j];
            score -=1;
            j--;}
            else break;
        }
        return ans;
    }
};