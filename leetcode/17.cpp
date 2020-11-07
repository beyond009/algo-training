#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<cstring>
using namespace std;
string tmp[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int a[10];
class Solution {
public:
    vector<string> letterCombinations(string digits) {
       int i;
       for(i = 0;i < digits.size();i++){
           a[i] = int(digits[i]) - 48;
       }
       vector<string> ans;
       for(int j = 0;j < tmp[a[0]].size();j++){
           string s;
           s += tmp[a[0]][j];
           dfs(1,s,digits.size(),ans);
       }
       return ans;
    }
    void dfs(int x,string s,int n,vector<string> &at){
        if(x == n) {
            at.push_back(s); 
            return;
        }
        for(int j = 0;j < tmp[a[x]].size();j++){
           s += tmp[a[x]][j];
           dfs(x + 1,s,n,at); 
           s.erase(s.end() - 1);
        }
    }
};
