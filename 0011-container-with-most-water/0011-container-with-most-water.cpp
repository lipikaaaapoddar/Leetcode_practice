#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int x = 0 , y = n-1 , mwater=0 ;
        while(x<y){
           int b = y-x;
           int l = min (height[y] ,height[x]);
           int cont = b*l ;
           mwater = max(mwater , cont);

           if(height[x] <height[y]){
                x++;
           }
           else{
            y--;
           }
           
        }
        return mwater;
    }
};