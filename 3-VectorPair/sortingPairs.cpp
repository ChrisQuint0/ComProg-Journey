//Sorting pairs
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<pair<int, int>> points;
  points.push_back({3, 1});
  points.push_back({1, 2});
  points.push_back({3, 0});
  points.push_back({1, 5});
  points.push_back({2, 3});

  cout << "Before sorting: " << "\n";

  for(auto p: points){
    cout << "(" << p.first << ", " << p.second << ")" << "\n";
  }

  sort(points.begin(), points.end());

  cout << "After sorting: " << "\n";
  for(auto p: points){
    cout << "(" << p.first << ", " << p.second << ")" << "\n";
  }

  return 0;
}