class Solution {
public:
    int maximumTastiness(vector<int>& price, int k) {
        int n= price.size();
        int ans=0;
        sort(price.begin(),price.end());
        int l=1;
        int r=price[n-1]-price[0];
        while(l<=r){
            int mid= l+(r-l)/2;
            int num=1, cur=price[0];
            for(int i=1;i<n;i++){
                if(cur+mid<= price[i]) {
                    num++;
                    cur=price[i];
                }
            }
            if(num>=k){
                ans= mid;
                l=mid+1;
            }
            else r= mid-1;
        }
        return ans;
    }
};