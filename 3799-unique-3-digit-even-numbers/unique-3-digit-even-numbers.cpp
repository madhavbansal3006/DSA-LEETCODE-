class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int ans = 0;
        int n = digits.size();
        bool seen[1000] = {};

        for (int i = 0; i < n; i++) {
            if (digits[i] == 0) continue;

            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {

                    if (i != j && j != k && k != i) {

                        int num = digits[i] * 100
                                + digits[j] * 10
                                + digits[k];

                        if (num % 2 == 0 && !seen[num]) {
                            seen[num] = true;
                            ans++;
                        }
                    }
                }
            }
        }

        return ans;
    }
};