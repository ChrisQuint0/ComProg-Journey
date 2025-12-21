//Removing duplicates using stl
//sort, *min_element, *max_element, reverse, accumulate, count, find

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<int> v = {1, 2, 2, 3, 3, 3, 4, 5, 5};

  cout << "Before: ";
  for(auto x : v) cout << x << " ";
  cout << "\n";

  //Sort it
  sort(v.begin(), v.end());

  //Remove consecutive duplicates
  auto last = unique(v.begin(), v.end());

  //Erase the removed elements
  v.erase(last, v.end());

  cout << "After removing duplicates: ";
  for(auto x : v) cout << x << " ";
  cout << "\n";

  return 0;
}