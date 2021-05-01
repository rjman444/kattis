#include <bits/stdc++.h>

using namespace std;

void solve() {
    int nums[3];
    int n, ans;
    for (int i = 0; i < 3; i++) {
        cin >> n;
        nums[i] = n;
    }
    sort(nums, nums + 3);
    if (nums[1] - nums[0] > nums[2] - nums[1]) {
        ans = nums[1] - (nums[2] - nums[1]);
    } else if (nums[1] - nums[0] < nums[2] - nums[1]) {
        ans = nums[2] - (nums[1] - nums[0]);
    } else {
        ans = nums[2] + (nums[2] - nums[1]);
    }
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}

