//Codeforces Minimum Integer
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q;
  cin >> q;

  while(q--){
    long long l, r, d;
    cin >> l >> r >> d;

    if(d < l){
      cout << d << "\n";
    } else {
      cout << (r / d + 1) * d << "\n";
    }
  }

  return 0;
}


