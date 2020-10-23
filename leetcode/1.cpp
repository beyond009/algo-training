#include<unordered_map>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> H;
        for(int i = 0; i < nums.size();i++){
            if(H[target - nums[i]]){
                res.push_back(i);
                res.push_back(H[target - nums[i]]);
            } else{
                H[nums[i]] = i;
            }
        }
        return res;
    }
};
