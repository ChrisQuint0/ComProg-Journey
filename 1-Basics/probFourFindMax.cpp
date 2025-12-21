//Problem 4 Find Maximum of Three Numbers

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int a, b, c;

  cin >> a >> b >> c;

  int max;

  if(a > b && a > c){
    cout << a;
  } else if(b > a && b > c){
    cout << b;
  } else if(c > b && c > a){
    cout << c;
  }
  return 0;
}