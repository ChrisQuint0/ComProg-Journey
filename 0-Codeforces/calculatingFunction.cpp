//Calculating Function
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;
  cin >> n;

  if(n % 2 != 0){
    n += 1;
    n /= 2;
    cout << "-" << n << "\n";
  } else {
    cout << n / 2 << "\n";
  }

  return 0;
}