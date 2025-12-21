//Sorting arrays
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int arr[] = {5,2,8,1,9,3};

  int n = 6;
 
  cout << "Before sorting: ";
  for(int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << "\n";

  sort(arr, arr + n);
  
  cout << "After sorting: ";
  for(int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << "\n";

  return 0;
}