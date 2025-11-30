// 1590. Make Sum Divisible by P
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long sum = 0;
        for (int &n : nums) sum = (sum + n) % p;
        if (sum == 0) return 0;

        unordered_map<int, int> last;
        last[0] = -1;

        long long prefix = 0;
        int ans = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            prefix = (prefix + nums[i]) % p;
            long long x = (prefix - sum + p) % p;
            if (last.count(x)) ans = min(ans, i - last[x]);
            last[prefix] = i;
        }

        return ans == nums.size() ? -1 : ans;
    }
};