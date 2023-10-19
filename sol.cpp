class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        // 5 2 -1 -3 -4
        for (auto& x : nums) {
            if (k > 0 && x < 0) {
                x = abs(x);
                k--;
            }
        }
        sort(nums.begin(), nums.end());
        if (k % 2) {
            nums[0] *= -1;
        }
        int sum = 0;
        for (auto& x : nums) {
            sum += x;
        }
        return sum;
    }
};
