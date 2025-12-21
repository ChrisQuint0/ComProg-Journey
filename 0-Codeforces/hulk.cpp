//Codeforces Hulk
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  if(n == 1){
      cout << "I hate it\n";
      return 0;
  }

  for(int i = 1; i <= n; i++){
    if(i == 1){
      cout << "I hate that ";
      continue;
    }
    
    if(i % 2 == 0){
      cout << "I love ";
    } else {
      cout << "I hate ";
    }

    if(i != n){
      cout << "that ";
    }
  }
 
  cout << "it";
  cout << "\n";

  return 0;
}