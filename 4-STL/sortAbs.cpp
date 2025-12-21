//Custom sort: compare by absolute value
#include <bits/stdc++.h>
using namespace std;

bool compareByAbsolute(int a, int b){
  return abs(a) < abs(b);
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<int> v = {-5, 3, -2, 8, -1, 4};

  cout << "Before sorting: ";
  for(int x : v) cout << x << " ";
  cout << "\n";
  
  sort(v.begin(), v.end(), compareByAbsolute);

  cout << "After sorting: ";
  for(int x : v) cout << x << " ";
  cout << "\n";
  
  return 0;
}