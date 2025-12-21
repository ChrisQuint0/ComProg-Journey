//Binary search
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target){
  int left = 0;
  int right = arr.size() - 1;

  while(left <= right){
    int mid = left + (right - left) / 2;

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
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17};

  int target = 15;

  int result = binarySearch(arr, target);

  if(result != -1){
    cout << "Found at index: " << result << "\n";
  } else {
    cout << "Not found" << "\n";
  }


  return 0;
}