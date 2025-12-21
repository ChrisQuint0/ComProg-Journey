//Codeforces Closest to the left
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, k;
  cin >> n >> k;

  vector<int> v(n);
  vector<int> vk(k);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  for(int i = 0; i < k; i++){
    cin >> vk[i];
  }

  for(int i = 0; i < k; i++){
   auto upperBound = upper_bound(v.begin(), v.end(), vk[i]);
   cout << upperBound - v.begin() << "\n";

  }
  return 0;
}
