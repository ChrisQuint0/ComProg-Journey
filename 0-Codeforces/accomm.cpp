//Codeforces George and Accomodation
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<pair<int, int>> v;

  for(int i = 0; i < n; i++){
    int p, q;
    cin >> p >> q;
    v.push_back({p, q});
  }

  int count = 0;

  for(int i = 0; i < n; i++){
    int capacity = v[i].second - v[i].first;

    if(capacity >= 2){
      count++;
    }
  }

  cout << count << "\n";
  return 0;
}