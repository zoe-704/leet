class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int neg_counter = 0, min_n = 100001;
        for (vector<int>& row : matrix) {
            for (int& n : row) {
                sum += abs(n);
                min_n = min(min_n, abs(n));
                if (n <= 0) neg_counter++;
            }
        }
        if (neg_counter%2 == 1) sum -= (2*min_n);
        return sum;
    }
};