//Vector of Pairs
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  //Create a vector of pairs
  vector<pair<int, int>> coordinates;

  coordinates.push_back({1, 2});
  coordinates.push_back({3, 4});
  coordinates.push_back({5, 6});

  //Print all pairs
  cout << "All coordinates: " << "\n";
  for(int i = 0; i < coordinates.size(); i++){
    cout << "(" << coordinates[i].first << "," << coordinates[i].second << ")" << "\n";
  }

  //Or use auto
  cout << "Using auto: " << "\n";
  for(auto p: coordinates){
    cout << "(" << p.first << ", " << p.second << ")" << "\n";
  }

  return 0;
}