//Codeforces Interesting Drink
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> prices(n);

  for(int i = 0; i < n; i++){
    cin >> prices[i];
  }

  sort(prices.begin(), prices.end());

  int q;
  cin >> q;

  for(int i = 0; i < q; i++){
    int m;
    cin >> m;

    auto it = upper_bound(prices.begin(), prices.end(), m);
    int count = it - prices.begin();

    cout << count << "\n";
  }

  return 0;
}