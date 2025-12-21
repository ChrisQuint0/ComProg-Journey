//Codeforces Tram
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  int n;
  cin >> n;

  int capacity = 0;
  int max = 0;

  for(int i = 0; i < n; i++){
    int a, b;

    cin >> a >> b;

    if(i == 0){
      capacity = b;
      max = capacity;
      continue;
    }

    capacity -= a;
    capacity += b;

    if(capacity > max){
      max = capacity;
    }
  }

  cout << max << "\n";


  return 0;
}