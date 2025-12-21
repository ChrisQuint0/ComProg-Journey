//Codeforces Stones on the table
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  string s;
  
  cin >> n;
  cin >> s;

  vector<char> v(n);

  for(int i = 0; i < n; i++){
    v[i] = s[i];
  }

  char prev = v[0];

  int count = 0;

  bool flag = true;

  for(int i = 1; i < n; i++){
    if(v[i] == prev){
      count++;
      flag = false;
    }
    
    prev = v[i];
  }

  if(flag){
    cout << 0 << "\n";
    return 0;
  }


  cout << count << "\n";

  
  return 0;
}