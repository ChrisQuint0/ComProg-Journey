//Two pointers Example 1
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> arr = {1, 2, 3, 4, 6, 8, 9};

  int target = 10;

  int left = 0;
  int right = arr.size() - 1;
  bool found = false;

  while(left < right){
    int sum = arr[left] + arr[right];
    
    if(sum == target){
      cout << "Found: " << arr[left] << " + " << arr[right] << " = " << target << "\n";
      found = true;
      break;
    } else if(sum < target){
      left++;
    } else {
      right--;
    }
  }

  if(!found){
    cout << "Not found" << "\n";
  }
  

  return 0;
}