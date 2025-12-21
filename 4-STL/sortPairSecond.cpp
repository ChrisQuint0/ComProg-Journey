//Sort by second element of a pair
#include <bits/stdc++.h>
using namespace std;

bool compareBySecond (pair<int, int> a, pair<int, int> b){
  return a.second < b.second;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<pair<int, int>> v = {{3, 10}, {1, 5}, {2, 20}, {4,5}};

  cout << "Before sorting: " << "\n";
  for(auto x : v)  cout << x.first << ", " << x.second << "\n";
  cout << "\n";

  sort(v.begin(), v.end(), compareBySecond);

  cout << "After sorting: " << "\n";
  for(auto x : v)  cout << x.first << ", " << x.second << "\n";
  cout << "\n";
  
  
  return 0;
}