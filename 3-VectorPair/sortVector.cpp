//Sort a vector
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  
  vector<int> v;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end());

  for(int x : v) cout << x << " ";
  cout << "\n";
  return 0;
}