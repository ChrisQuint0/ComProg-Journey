//Codeforces They are everywhere
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  string s;
  cin >> s;

  set<char> uniqueTypes(s.begin(), s.end());
  int totalTypes = uniqueTypes.size();

  int left = 0;
  int minLength = n;
  map<char, int> windowCount;
  int typesInWindow = 0;

  for(int right = 0; right < n; right++){
    if(windowCount[s[right]] == 0){
      typesInWindow++;
    }
    windowCount[s[right]]++;

    while(typesInWindow == totalTypes){
      minLength = min(minLength, right - left + 1);

      windowCount[s[left]]--;
      if(windowCount[s[left]] == 0){
        typesInWindow--;
      }
      left++;
    }
  }

  cout << minLength << "\n";

  return 0;
}