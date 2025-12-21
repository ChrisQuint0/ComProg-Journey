//Codeforces Beautiful Year
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int y;
  cin >> y;

  while(true){
    y++;
    int a = y / 1000;
    int b = (y / 100) % 10;
    int c = (y / 10) % 10;
    int d = y % 10;

    set<int> digits = {a, b, c, d};

    if(digits.size() == 4){
      cout << y << "\n";
      break;
    }
  }

  return 0;
}