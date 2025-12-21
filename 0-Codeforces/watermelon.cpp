//Codeforces Watermelon Problem
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
	
  int n;

  cin >> n;

  if(n <= 2){
    cout << "NO";
  } else if(n % 2 == 0){
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }
  return 0;
}