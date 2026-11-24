class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 2, l = 0, prod = 1;

        for (int r = 0; r < nums.size(); r++) {
            while (gcd(prod, nums[r]) > 1) {
                prod /= nums[l];
                l++;
            }

            prod *= nums[r];
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};