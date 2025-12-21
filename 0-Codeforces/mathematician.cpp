//Codeforces Ultra Fast Mathematician
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string a, b;
  cin >> a >> b;

  for(int i = 0; i < a.length(); i++){
    if(a[i] == b[i]){
      cout << 0;
    } else {
      cout << 1;
    }
  }

  cout << "\n";

  return 0;
}