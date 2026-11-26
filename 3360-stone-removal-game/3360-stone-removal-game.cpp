class Solution {
public:
    bool canAliceWin(int n) {
      
        if(n<10) return false;
          int remove=10;
        while(remove<=n){
            n-=remove;
            remove--;
        }
        if(remove&1) return true;
        return false;
    }
};