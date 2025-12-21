//STL Reversing
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<int> v = {1, 2, 3, 4, 5};

  cout << "Original: ";
  for(int i : v) cout << i << " ";
  cout << "\n";
  
  reverse(v.begin(), v.end());

  cout << "Reversed: ";
  for(int i : v) cout << i << " ";
  cout << "\n";
  
  return 0;
}