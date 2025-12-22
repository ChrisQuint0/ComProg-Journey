//Codeforces I Wanna Be the Guy
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int px, py;

  cin >> px;

  set<int> levels;

  for(int i = 0; i < px; i++){
    int x;
    cin >> x;
    levels.insert(x);
  }

  cin >> py;

  for(int i = 0; i < py; i++){
    int x;
    cin >> x;
    levels.insert(x);
  }

  if(levels.size() == n){
    cout << "I become the guy.\n";
  } else {
    cout << "Oh, my keyboard!\n";
  }

  return 0;
}