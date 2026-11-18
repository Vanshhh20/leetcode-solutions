class Solution {
public:
    int minChanges(string s) {
     char cur=s[0];
     int conti=0;
     int ans=0;
     for(int i=0;i<s.size();i++){

        if(s[i]==cur){
            conti++;
            continue;
        }
if(conti%2==0) conti=1;
else{
    conti=0;
    ans++;
}
cur=s[i];

     }   
     return ans;
    }
};