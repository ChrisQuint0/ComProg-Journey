#include <bits/stdc++.h>
using namespace std;

// ============ BASIC TEMPLATE ============
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Your code here

    return 0;
}

// ============ BINARY SEARCH ============
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// ============ TWO POINTERS - TWO SUM ============
bool twoSum(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return true;
        else if (sum < target) left++;
        else right--;
    }
    return false;
}

// ============ SLIDING WINDOW (FIXED SIZE) ============
int maxSumK(vector<int>& arr, int k) {
    int windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += arr[i];
    int maxSum = windowSum;
    for (int i = k; i < arr.size(); i++) {
        windowSum += arr[i] - arr[i-k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

// ============ SLIDING WINDOW (VARIABLE SIZE) ============
int longestSubarraySumLessOrEqual(vector<int>& arr, int target) {
    int left = 0, sum = 0, maxLen = 0;
    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];
        while (sum > target) {
            sum -= arr[left];
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

// ============ USEFUL STL ============
// sort(v.begin(), v.end());
// sort(v.begin(), v.end(), greater<int>());
// reverse(v.begin(), v.end());
// *max_element(v.begin(), v.end());
// *min_element(v.begin(), v.end());
// accumulate(v.begin(), v.end(), 0LL);
// lower_bound(v.begin(), v.end(), x);
// upper_bound(v.begin(), v.end(), x);
// binary_search(v.begin(), v.end(), x);
