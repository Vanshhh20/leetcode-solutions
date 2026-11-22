class Solution {
public:
    bool checkString(string s) {
        int a=-1,b=-1;
        for(int i=0;i<s.size();i++){
            if(b==-1 && s[i]=='b') b=i;
            if(s[i]=='a')a=i;
        }
        if(a==-1|| b==-1) return true;
        if(a<b) return true;
        return false;
    }
};