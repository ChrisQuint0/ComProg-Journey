//Calculate Factorial
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;

  long long factorial = 1;

  for(int i = 1; i <= n; i++){
    factorial *= i;
  }
  
  cout << factorial << "\n";
  return 0;
}