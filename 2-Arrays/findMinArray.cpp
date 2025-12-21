//Find minimum element in an array

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;

  int arr[n];

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int minimum = arr[0];

  for(int i = 1; i < n; i++){
    if(arr[i] < minimum){
      minimum = arr[i];
    }
  }

  cout << "Minimum: " << minimum << "\n";

  return 0;
}