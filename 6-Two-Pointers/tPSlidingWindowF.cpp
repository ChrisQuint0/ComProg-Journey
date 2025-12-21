//Two pointers Sliding Window
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {2, 1, 5, 1, 3, 2};

  int k = 3;
  int n = arr.size();

  int windowSum = 0;


  for(int i = 0; i < k; i++){
    windowSum += arr[i];
  }

  int maxSum = windowSum;

  for(int i = k; i < n; i++){
    windowSum += arr[i];
    windowSum -= arr[i - k];
    maxSum = max(maxSum, windowSum);
  }

  cout << "Maximum sum of the subarray size " << k << ": " << maxSum; 

  return 0;
}