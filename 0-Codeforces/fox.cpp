//Codeforces Fox and Snake
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m; //h and w
  cin >> n >> m;

  bool turn = true;

  for(int i = 0; i < n; i++){
    if(i % 2 == 0){
      for(int j = 0; j < m; j++){
        cout << "#";
      }

      cout << "\n";
    } else {
      if(turn){
        for(int j  = 0; j < (m - 1); j++){
          cout << ".";
        }

        cout << "#\n";

        turn = false;

      } else {
        cout << "#";

        for(int j  = 0; j < (m - 1); j++){
          cout << ".";
        }

        cout << "\n";

        turn = true;
      }
    }
  }

  return 0;
}