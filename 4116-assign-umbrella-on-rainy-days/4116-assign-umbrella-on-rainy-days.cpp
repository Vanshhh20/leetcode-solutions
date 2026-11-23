class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {

        int a = 0, b = 0;

        vector<string> ans;
        // 0 0= noone, noone
        // 1 0 = bob,noone
        // 0 1= noone, bob/cpmare further ..ie clash
        // 1 1 clash both days...alice bob
        for (int i = 0; i < rain.size() - 1; i++) {
            if (rain[i] == 1 && rain[i + 1] == 1) { // clash
                if (a <= b) {
                    ans.push_back("Alice");
                    a++;
                } else {
                    ans.push_back("Bob");
                    b++;
                }
            } else if (rain[i] == 1) {
                ans.push_back("Bob");
                b++;
            } else
                ans.push_back("None");
        }
        ans.push_back(rain.back() == 1 ? "Bob" : "None");
        return ans;
    }
};