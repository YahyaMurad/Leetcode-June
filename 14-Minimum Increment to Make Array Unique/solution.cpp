#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] ==nums[i-1]) {
                count += 1;
                nums[i] = nums[i] + 1;
            }
            else if (nums[i] < nums[i-1]) {
                int diff = abs(nums[i] - nums[i-1]) + 1;
                count += diff;
                nums[i] = nums[i] + diff;
            }
        }
        return count;
    }
};