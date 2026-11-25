#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int x;
    
    while (cin >> x) {
        nums.push_back(x);
    }

    if (nums.empty()) return 0;

    int start_index = 0;
    if (nums[0] == (int)nums.size() - 1) {
        start_index = 1;
    }

    int min_height = nums[start_index];
    int max_diff = 0;

    for (int i = start_index + 1; i < nums.size(); i++) {
        if (nums[i] < min_height) {
            min_height = nums[i];
        } else {
            int diff = nums[i] - min_height;
            if (diff > max_diff) {
                max_diff = diff;
            }
        }
    }

    cout << max_diff << endl;
    return 0;
}
