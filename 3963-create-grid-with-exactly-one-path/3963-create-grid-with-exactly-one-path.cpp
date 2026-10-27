class Solution {
public:
    void solve(int i , int j, int n , int m , vector<string> &ans){
        if(i==n-1 && j==m-1){
            ans[i][j] = '.';
            return ;}
        ans[i][j]='.';
        
        if(j <m-1) solve(i,j+1,n,m,ans);
        else solve(i+1,j,n,m,ans);
    }
    
    vector<string> createGrid(int m, int n) {
       vector<string> ans(m,string(n,'#'));
       solve(0,0 ,m , n , ans); 
        return ans;
    }
};