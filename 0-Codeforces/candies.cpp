//Codeforces Candies and Two Sisters
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t;
  cin >> t;

  for(int i = 0; i < t; i++){
    long long n;
    cin >> n;

    if(n < 3){
      cout << 0 << "\n";
    } else if(n % 2 == 1){
      cout << n / 2 << "\n";
    } else {
      cout << (n / 2) - 1 << "\n";
    }
  }

  return 0;
}
