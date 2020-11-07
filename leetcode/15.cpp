#include<algorithm>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = 0;
        int cnt = 0;
        sort(nums.begin(),nums.end());
        if(nums.size() < 3) return ans;
        int last = 999999;
        for(int i = 0;i < nums.size() - 1;i++){
            int tmp = n - nums[i];
            int l = i + 1,r = nums.size() - 1;
            if(last == nums[i]) continue;
            while(l < r){
                if(nums[l] + nums[r] == tmp) {
                   vector<int> ans1;
                   ans1.push_back(nums[i]);
                   ans1.push_back(nums[l]);
                   ans1.push_back(nums[r]);
                   ans.push_back(ans1);
                   int a = nums[l],b = nums[r];
                   while(nums[l] == a && l < r) l++;
                   while(nums[r] == b && l < r) r--;
                }
                if(nums[l] + nums[r] < tmp) l++;
                if(nums[l] + nums[r] > tmp) r--;
            } 
            last = nums[i];
        }
        return ans;
    }
};