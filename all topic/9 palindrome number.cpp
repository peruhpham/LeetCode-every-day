#include <climits>

class Solution {
    public:
        bool isPalindrome(int x) {
            int res = x, r;
            long newres=0;
            if(x<0) return false;
            while(x){
                r=x%10;
                newres=10*newres+r;
                if(newres > INT_MAX) return false;
                x/=10;
            }
            return res==newres;
        }
    };