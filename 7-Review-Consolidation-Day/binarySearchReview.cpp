//Binary Search Review
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target){
  int left = 0;
  int right = arr.size() - 1;

  while(left <= right){
    int mid = left + (right -left) / 2;

    if(arr[mid] == target){
      return mid;
    } else if(arr[mid] < target){
      left = mid + 1;
    } else if(arr[mid] > target){
      right = mid - 1;
    }
  }

  return -1; //Not found
}

int main(){
  vector<int> arr = {1, 2, 3, 4, 5};

  cout << "Array: ";
  for(int x: arr) cout << x << " ";
  cout << "\n";

  int n;
  cout << "Target: ";
  cin >> n;
  cout << "\n";

  int index = binarySearch(arr, n);

  if(index != -1){
    cout << "Found at index: " << index << "\n";
  } else {
    cout << "Not found\n";
  }

  return 0;
}