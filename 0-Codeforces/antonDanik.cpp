//Codeforces Anton and Danik
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int n;
  cin >> n;

  string s;

  cin >> s;

  int ca = 0;
  int cb = 0;

  for(int i = 0; i < n; i++){
    if(toupper(s[i]) == 'A'){
      ca++;
    } else {
      cb++;
    }
  }

  if(ca > cb){
    cout << "Anton\n";
  } else if(ca < cb){
    cout << "Danik\n";
  } else {
    cout << "Friendship\n";
  }

  return 0;
}