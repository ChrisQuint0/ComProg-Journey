//Two pointers - Two Sum
#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& arr, int target){
  int left = 0;
  int right = arr.size() - 1;

  while(left < right){
    int sum = arr[left] + arr[right];

    if(sum == target){
      return true;
    } else if (sum < target){
      left++;
    } else {
      right--;
    }
  }

  return false;
}

int main(){
  cout << "Array: ";
  vector<int> arr = {1, 2, 3, 4, 5};
  for(int x: arr) cout << x << " ";
  cout << "\n";

  cout << "Target Sum: "; 
  int n;
  cin >> n;

  bool found = twoSum(arr, n);

  if(found){
    cout << "True";
  } else {
    cout << "False";
  }

  
}