//CSES Distinct Values
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;
  cin >> n;
  
  vector<int> v(n);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  set<int> a(v.begin(), v.end());

  cout << a.size() << "\n";


  return 0;
}