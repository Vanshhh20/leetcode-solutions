class Solution {
public:
    int shipWithinDays(vector<int>& w, int days) {
        int l = *max_element(w.begin(), w.end());
        int r = accumulate(w.begin(), w.end(), 0);
        while (l < r) {
            int m = l + (r - l) / 2;
            int carry = 0;
            int day = 1;
            for (auto p : w) {
                carry += p;
                if (carry > m) {
                    day++;
                    carry = p;
                }
            }
            if (day > days)
                l = m + 1;
            else
                r = m;
        }
        return l;
    }
};