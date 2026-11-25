class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        int m=n-1;
        m=m&n;
        if(m) return false;
        return true;
    }
};