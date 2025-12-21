#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, k;
  cin >> n >> k;

  //Count how many odd numbers, it is guaranteed that half of it are odd and half of it are even, odd comes first.
  long long oddCount = (n + 1) / 2;

  if(k <= oddCount){
    cout << 2 * k - 1;
  } else{
    cout << 2 * (k - oddCount);
  }
 
  return 0;
}