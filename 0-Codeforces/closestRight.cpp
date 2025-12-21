//Codeforces Closest to the right
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, k;

  cin >> n >> k;

  vector<int> v(n);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  for(int i = 0; i < k; i++){
    int x;
    cin >> x;
    auto lowerBound = lower_bound(v.begin(), v.end(), x);

    cout << (lowerBound - v.begin()) + 1 << "\n";
  }

  return 0;
}