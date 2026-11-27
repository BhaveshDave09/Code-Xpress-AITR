#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        visited[nums[i]] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cout << i << " ";
        }
    }

    return 0;
}
