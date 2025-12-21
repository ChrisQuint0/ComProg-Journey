//Codeforces Bit++
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int n;
  cin >> n;

  int finalValue = 0;

  vector<string> v;
  
  for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    v.push_back(s);
  }

  for(int i = 0; i < n; i++){
    if(v[i] == "X++" || v[i] == "++X"){
      finalValue++;
    } else if(v[i] == "X--" || v[i] == "--X"){
      finalValue--;
    }
  }
  
  cout << finalValue << "\n";

  return 0;
}