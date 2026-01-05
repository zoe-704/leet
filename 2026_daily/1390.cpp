class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for (int& n : nums) {
            int sum = 0, count = 0;
            for (int i = 1; i * i <= n; i++) {
                if (n % i == 0) {
                    if (i * i == n) {
                        sum += i;
                        count++;
                    } else {
                        sum += (i + n / i);
                        count += 2;
                    }
                }
            }
            if (count == 4) {
                ans += sum;
            }
        }
        return ans;
    }
};