//Custom sort: sort strings by length
#include <bits/stdc++.h>
using namespace std;

bool compareByLength(string a, string b){
  return a.length() < b.length();
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<string> words = {"apple", "hi", "banana", "a", "programming"};

  cout << "Before sorting: \n";
  for(string s: words) cout << s << "\n";

  sort(words.begin(), words.end(), compareByLength);

  cout << "\nAfter sorting: \n";
  for(string s: words) cout << s << "\n";

  return 0;
}