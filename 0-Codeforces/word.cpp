//Codeforces Word
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  string s;
  string sUpper;
  string sLower;


  cin >> s;

  sUpper = s;
  sLower = s;

  transform(sUpper.begin(), sUpper.end(), sUpper.begin(), ::toupper);
  transform(sLower.begin(), sLower.end(), sLower.begin(), ::tolower);

  int uppercase = 0;
  int lowercase = 0;

  for(int i = 0; i < s.length(); i++){
    if(s[i] == sUpper[i]){
      uppercase++;
    } else {
      lowercase++;
    }
  }
  
  if(uppercase > lowercase){
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  } else{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }

  cout << s << "\n";

  return 0;
}