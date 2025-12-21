//Codeforces Dragons
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  long long s, n;
  cin >> s >> n;

  vector<pair<long long, long long>> v;
  
  for(int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    v.push_back({x, y});
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < n; i++){
    if(s > v[i].first){
      s += v[i].second;
    } else {
      cout << "NO\n";

      return 0;
    }
  }

  cout << "YES\n";
  return 0;
}