//Helpful Maths
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  string s = "";
  vector<int> v;

  cin >> s;

  for(int i = 0; i < s.length(); i+=2){
    v.push_back(s[i] - '0');
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++){
    cout << v[i];

    if(i + 1 != v.size()){
      cout << "+";
    }
  }

  cout << "\n";
  return 0;
}