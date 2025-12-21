//Sorting strings
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<string> names = {"Charlie", "Alice", "Bob", "David"};

  cout << "Before sorting: \n";
  for(string s: names) cout << s << "\n";

  sort(names.begin(), names.end());

  cout << "\nAfter Sorting: \n";
  for(string s: names) cout << s << "\n";

  return 0;
}