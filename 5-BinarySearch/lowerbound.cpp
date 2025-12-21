//Lowerbound (First element >= target)
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17};

  //Find first element >= 7
  auto it = lower_bound(arr.begin(), arr.end(), 7);

  if(it != arr.end()){
    cout << "First element >= 7 is at index: " << (it - arr.begin()) << "\n";
    cout << "Value: " << *it << "\n";
  }

  //Find first element >= 6
  auto it2 = lower_bound(arr.begin(), arr.end(), 7);
  
  if(it2 != arr.end()){
    cout << "First element >= 6: " << *it2 << "\n";
  }

  return 0;
}