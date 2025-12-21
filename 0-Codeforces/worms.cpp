//Codeforces Worms
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;
  cin >> n;

  vector<int> piles;

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    piles.push_back(x);
  }

  vector<long long> prefix(n);

  for(int i = 0; i < n; i++){
    prefix[i] = piles[i];

    if(i > 0){
      prefix[i] += prefix[i - 1];
    }
  } 

  long long m;
  cin >> m;

  for(int i = 0; i < m; i++){
    int x;
    cin >> x;

    auto it = lower_bound(prefix.begin(), prefix.end(), x);

    cout << it - prefix.begin() + 1 << "\n";
  }

  return 0;
}