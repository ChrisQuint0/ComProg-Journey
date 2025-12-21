//Codeforces Drinks
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long double n;
  cin >> n;

  long double t = 0;

  for(int i = 0; i < n; i++){
    long double x;
    cin >> x;

    t += x;
  }

  cout << ((t / 100) / n) * 100;

  

  return 0;
}