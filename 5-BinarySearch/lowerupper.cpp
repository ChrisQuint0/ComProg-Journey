//Practice problem: Given a sorted array with duplicates, find the first and last position of a target value

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> arr = {1, 2, 3, 3, 3, 3, 4, 5};

  int target = 3;

  auto first = lower_bound(arr.begin(), arr.end(), target);

  auto second = upper_bound(arr.begin(), arr.end(), target);
  int last = (second - arr.begin()) - 1;

  if(first != arr.end() && *first == target){
    cout << "First: " << first - arr.begin();
    cout << ", Last: " << last << "\n"; 
  } else {
    cout << "Not found" << "\n";
  }

  return 0;
}
