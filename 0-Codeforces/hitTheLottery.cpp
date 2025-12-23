#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long money;
  cin >> money;

  int count = 0;

  vector<int> denominations = {100, 20, 10, 5, 1};

  int i = 0;

  while(money > 0){
    count += (money / denominations[i]);
    money %= denominations[i];

    i++;
  }

  cout << count << "\n";

  return 0;
}