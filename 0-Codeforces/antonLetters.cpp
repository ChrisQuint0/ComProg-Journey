//Codeforces Anton and Letters
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  getline(cin, s); //Need to use this, because if we use the normal cin, the input stops when it encounters a whitespace (The more you know)

  set<char> letters;

  for(int i = 1; i < s.length(); i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      letters.insert(s[i]);
    }
  }

  cout << letters.size() << "\n";

  return 0;
}