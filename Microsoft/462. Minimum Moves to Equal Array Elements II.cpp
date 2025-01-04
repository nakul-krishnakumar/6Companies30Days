#include <bits/stdc++.h>
using namespace std;

int minMoves2(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int median = nums[nums.size()/2];
    int steps = 0;
    for (int i=0; i<nums.size(); i++) {
        steps += abs(median - nums[i]);
    }

    return steps;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    cout << "Minimum number of steps: " << minMoves2(nums);

    return 0;
}