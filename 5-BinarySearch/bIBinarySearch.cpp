//Built-in binary search
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

 vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17};

  if(binary_search(arr.begin(), arr.end(), 7)){
    cout << "7 exists" << "\n";
  } else {
    cout << "7 doesn't exist" << "\n";
  }

  if(binary_search(arr.begin(), arr.end(), 10)){
    cout << "10 exists" << "\n";
  } else {
    cout << "10 doesn't exist" << "\n";
  }

  return 0;
}