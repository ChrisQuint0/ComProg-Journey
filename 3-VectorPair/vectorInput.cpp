//Reading input into a vector
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  

  int n;
  cin >> n;

  vector<int> v(n);

  //Read n numbers
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  //Using push_back
  vector<int> v2;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v2.push_back(x);
  }

  for(int x: v) cout << x << " ";
  cout << "\n";

  for(int x: v2) cout << x << " ";
  cout << "\n";

  return 0;
}