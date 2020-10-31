#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int maxx = 0;
        string ans;
        for(int i = 0;i < s.size();i++){
            string a1  = exp(s,i,i);
            string a2 = exp(s,i,i + 1);
            if(a1.size() > maxx){
                maxx = a1.size();
                ans = a1;
            }
            if(a2.size() > maxx){
                maxx =  a2.size();
                ans = a2;
            }
        }
        return ans;
    }
    string  exp(string s,int t1,int t2){
        int l = t1,r = t2;
        while(l > 0 && r < s.size() && s[l] == s[r]){
            l--;r++;
        }
        int cnt = 0;
        string ans;
        for(int i = l;i <= r;i++){
            ans[cnt++] = s[i];
        }
        return ans;
    }
};
