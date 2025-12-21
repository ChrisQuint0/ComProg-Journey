//Sliding Window - Max Sum K Elements
#include <bits/stdc++.h>
using namespace std;

int maxSumK(vector<int>& arr, int k){
  int sum = 0;

  for(int i = 0; i < k; i++){
    sum += arr[i];
  }

  int maxSum = sum;

  for(int i = k; i < arr.size(); i++){
    sum += arr[i];
    sum -= arr[i - k];
    maxSum = max(maxSum, sum);
  }

  return maxSum;
}

int main(){
  vector<int> arr = {1, 2, 3, 4, 5};

  cout << "Array: ";
  for(int x: arr) cout << x << " ";
  cout << "\n";

  cout << "Size of window: ";
  int k;
  cin >> k;

  int maxSum = maxSumK(arr, k);

  cout << "\nThe maximum sum of " << k << " consecutive elements is " << maxSum;
  return 0;
}