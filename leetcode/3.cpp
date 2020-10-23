#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> H;
        int maxx = 0;
        int j = 0;
        int ans = 0;
        for(int i = 0;i < s.size();i++){
            while(!H.count(s[j])){
                H[s[j]] = 1;
                j++;
                ans++;
            }
            maxx = max(ans,maxx);
            H.erase(s[i]);
            ans--;
        }
        return maxx;
    }
};
