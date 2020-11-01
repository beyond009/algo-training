#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
using namespace std;
const int MAXN = 1010;
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.size() == 1) return s;
        vector<string> r(min(numRows,int(s.size())));
        int curRow = 0;
        bool goingDown = false;
        for(char c : s){
            r[curRow] += c;
            if(curRow == 0 || curRow == numRows - 1) goingDown = !goingDown;
            curRow += goingDown ? 1 : -1; 
        }
        string ret;
        for(string row : r){
            ret += row;
        
        }
        cout << ret <<endl;
        return ret;
    }
};
int main(){
    Solution s;
    string ss;
    int numRows;
    cin >> ss >> numRows;
    s.convert(ss,numRows);
    return 0;
}