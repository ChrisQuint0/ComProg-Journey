//Codeforces In Search of an Easy Problem

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;

    if(x == 1){
      cout << "HARD\n";
      return 0;
    }
  }

  cout << "EASY\n";

  return 0;
}
