//Sum of elements using STL

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<int> v = {1, 2, 3, 4, 5};

  int sum = accumulate(v.begin(), v.end(), 0);
  cout << "Sum: " << sum << "\n";

  long long sum2 = accumulate(v.begin(), v.end(), 0LL);
  return 0;
}