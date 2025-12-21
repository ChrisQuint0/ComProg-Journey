//Input arrays
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;

  int array[n];

  for(int i = 0; i < n; i++){
     cin >> array[i];
  }

  //Print in reverse
  for(int i = n - 1; i >= 0; i--){
    cout << array[i] << " ";
  }

  cout << "\n";

  return 0;
}