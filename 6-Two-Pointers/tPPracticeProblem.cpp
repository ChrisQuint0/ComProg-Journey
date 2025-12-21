//Two pointers Practice Problem: Count pairs with sum < K
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> arr = {1, 2, 3, 4, 5};
  int k = 7;
  int left = 0;
  int right = arr.size() - 1;
  int count = 0;

  while(left < right){
    int sum = arr[left] + arr[right];
  
    if(sum < k){
      count += right - left;
      left++;
    } else {
      right--;
    }
  }
  cout << count << " pairs" << "\n";

  return 0;
}