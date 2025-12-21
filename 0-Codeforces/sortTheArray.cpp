//Codeforces: Sort the Array
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;

  vector<int> arr(n);
  
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  vector<int> sortedArray = arr;

  sort(sortedArray.begin(), sortedArray.end());

  int left = -1;
  int right = -1;

  for(int i = 0; i < n; i++){
    if(arr[i] != sortedArray[i]){
      if(left == -1){
        left = i;
      }

      right = i;
    }
  }

  if(left == -1){
    cout << "yes\n";
    cout << "1 1" << "\n";
    return 0;
  }

  reverse(arr.begin() + left, arr.begin() + right + 1);

  if(arr == sortedArray){
    cout << "yes\n";
    cout << left + 1 << " " << right + 1 << "\n";
  } else {
    cout << "no\n";
  }

  return 0;
}