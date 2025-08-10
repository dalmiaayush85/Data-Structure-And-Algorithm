#include <bits/stdc++.h>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    
    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else { // nums[mid] == 2
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    // Example 1
    vector<int> nums1 = {1, 0, 2, 1, 0};
    sortColors(nums1);
    cout << "Example 1 Output: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    // Example 2
    vector<int> nums2 = {0, 0, 1, 1, 1};
    sortColors(nums2);
    cout << "Example 2 Output: ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    // Custom Input
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the array elements (0, 1, or 2): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sortColors(nums);
    cout << "Sorted Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}