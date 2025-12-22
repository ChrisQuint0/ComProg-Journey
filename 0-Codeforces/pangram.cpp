//Codeforces Pangram
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  string s;
  cin >> s;

  if(s.length() < 26){
    cout << "NO\n";
    return 0;
  }

  set<char> seen;

  for(char c : s){
    seen.insert(tolower(c));
  }

  if(seen.size() == 26){
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}