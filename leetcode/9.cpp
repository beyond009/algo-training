class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 ){
            return false;
        }       
        if(x == 0){
            return true;
        }
        vector<int> a;
        int r = x;
        while(r){
           int m = r % 10;
           a.push_back(m);
           r /= 10;
        }
        int mid = a.size() / 2;
        if(a.size() == 1) return true;
        if(a.size() %2){
            int l = mid - 1,r = mid + 1;
            while(l >= 0 && r < a.size()){
                if(a[l] != a[r]) return false;
                l--;r++;
            }
            
        }else{
            int l = mid - 1,r = mid;
            while(l >= 0 && r < a.size()){
                if(a[l] != a[r]) return false;
                l--;r++;
            }
        }
        return true;
    }
};