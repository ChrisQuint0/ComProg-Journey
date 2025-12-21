//Codeforces Sereja and Dima
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> cards(n);

  for(int i = 0; i < n; i++){
    cin >> cards[i];
  }

  int left = 0;
  int right = cards.size() - 1;
  int s = 0;
  int d = 0;
  bool sTurn = true;
  bool dTurn = false;

  while(left <= right){
    if(cards[left] > cards[right]){
      if(sTurn){
        s += cards[left];
        sTurn = false;
        dTurn = true;
      } else {
        d += cards[left];
        dTurn = false;
        sTurn = true;
      }
    
      left++;
    } else {
      if(sTurn){
        s += cards[right];
        sTurn = false;
        dTurn = true;
      } else {
        d += cards[right];
        dTurn = false;
        sTurn = true;
      }

      right--;
    }
  }

  cout << s << " " << d << "\n";

  return 0;
}