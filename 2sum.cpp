#include <bits/stdc++.h>
using namespace std;

// Function to find two indices of the elements in the array that sum up to a specific target
vector<int> twoSum(int n, vector<int> &arr, int target) {
    unordered_map<int, int> mpp; // Map to store the indices of elements
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num; // Calculate the value needed to complete the target sum
        if (mpp.find(moreNeeded) != mpp.end()) { // Check if the value exists in the map
            return {mpp[moreNeeded], i}; // Return the indices if found
        }
        mpp[num] = i; // Store the index of the current element in the map
    }
    return { -1, -1}; // Return {-1, -1} if no such pair is found
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}
