#include<cmath>
#include<iostream>
#include<algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxx = 0;
        int l = 0,r = height.size() - 1;
        while(l < r){
           maxx = max(maxx,min(height[l],height[r])*(r - l));
           if(height[l] > height[r]) r--;
           else l++;
        }       
        return maxx;
    }
    
};