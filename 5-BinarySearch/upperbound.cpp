//Upperbound
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17};

  auto it = upper_bound(arr.begin(), arr.end(), 7);

  if(it != arr.end()){
    cout << "First element > 7 is at index: " << it - arr.begin() << "\n"; 
    cout << "Value: " << *it;
  } 



  return 0;
}