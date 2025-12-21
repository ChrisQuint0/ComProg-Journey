//Two pointers Sliding Window with Variable Sized Window
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> arr = {1, 2, 3, 4, 5};

  int k = 10;

  int left = 0;
  int currentSum = 0;
  int maxLength = 0;

  for(int right = 0; right < arr.size(); right++){
    currentSum += arr[right];

    while(currentSum > k && left <= right){
      currentSum -= arr[left];
      left++;
    }

    maxLength = max(maxLength, right - left + 1);
  }

  cout << "Longest subarray with sum <= " << k << ": " << maxLength;

  return 0;
}