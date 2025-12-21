//Codeforces Boy or Girl

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<char> v;

  string s = " ";
  
  cin >> s;

  for(int i = 0; i < s.length(); i++){
    char c = s[i];

    v.push_back(c);
  }

  sort(v.begin(), v.end());

  auto cleaned = unique(v.begin(), v.end());

  v.erase(cleaned, v.end());

  if(v.size() % 2 == 0){
    cout << "CHAT WITH HER!\n";
  } else {
    cout << "IGNORE HIM!\n";
  }

  return 0;
}