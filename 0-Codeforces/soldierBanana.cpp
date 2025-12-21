//Codeforces Soldier and Bananas

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k, n;
  long long w;

  cin >> k >> n >> w;

  int finalCost = 0;

  for(int i = 1; i <= w; i++){
      finalCost += i * k;
  }

  if(finalCost < n){
    cout << 0 << "\n";
  } else {
    cout << finalCost - n << "\n";
  }

  return 0;
}