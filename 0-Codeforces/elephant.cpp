//Codeforces Elephnat
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;

  while(true){
    if(n % 5 == 0){
       cout << n / 5;
       return false;
    } else if (n % 5 != 0){
       cout << (n / 5) + 1;
       return false;
    }
  }
  return 0;
}