//Sorting vectors
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<int> v = {5, 2, 8, 1, 9, 3};

  cout << "Before sorting: ";

  for(int x : v){
    cout << x << " ";
  }

  cout << "\n";

  sort(v.begin(), v.end());

  cout << "After sorting (ascending): ";

  for(int x: v){
    cout << x << " ";
  }

  cout << "\n";

  //Sort in descending order

  sort(v.begin(), v.end(), greater<int>());

  cout << "After sorting (descending): ";

  for(int x : v){
    cout << x << " ";
  }

  cout << "\n";

  return 0;
}