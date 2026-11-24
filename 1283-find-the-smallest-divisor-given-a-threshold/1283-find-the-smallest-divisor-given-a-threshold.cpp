class Solution {
public:
    int smallestDivisor(vector<int>& nums, int k) {
       
        int n= nums.size();
        int l= 1;
        int r= *max_element(nums.begin(),nums.end());
        int ans=r;
        while(l<=r){
int mid= l+(r-l)/2;
int s=0;
for(int i=0;i<n;i++){
s+=ceil(nums[i]*1.0/mid);
}
if(s<=k) {
    ans=mid;
    r=mid-1;
}
else l=mid+1;

        }
        return ans;
    }
};