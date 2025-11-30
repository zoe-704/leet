// 1394. Find Lucky Integer in an Array
class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> count(501, 0);
        int mx_lucky = -1;
        for (int &a : arr) {
            count[a]++;
        }
        for (int i = 1; i <= 500; i++) 
            if (count[i] == i) mx_lucky = i;
        return mx_lucky;
    }
};