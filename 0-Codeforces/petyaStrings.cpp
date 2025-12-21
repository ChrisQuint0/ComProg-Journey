//Codeforces Petya and Strings
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<string> v;

  string first = "";
  string second = "";

  cin >> first;

  //transform(first.begin(), first.end(), first.begin(), ::tolower);

  for(char &c : first){

    if(c >= 'A' && c <= 'Z'){
      c = c + 32;
    }
  }

  v.push_back(first);

  cin >> second;

  transform(second.begin(), second.end(), second.begin(), ::tolower);
   v.push_back(second);
  
  sort(v.begin(), v.end());

  if(first == second){
    cout << "0";
  }
  else if(first == v[0]){
    cout << "-1\n";
  } else if(second == v[0]){
    cout << "1";
  }
  
  return 0;
}