//Finding max and min using STL
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<int> v = {5, 2, 8, 1, 9, 3};

  //Find maximum element
  int maxVal = *max_element(v.begin(), v.end());
  cout << "Maximum Value: " << maxVal << "\n";
  
  //Find minimum element
  int minVal = *min_element(v.begin(), v.end());
  cout << "Minimum Value: " << minVal << "\n";

  //Find position of the maximum
  auto maxPos = max_element(v.begin(), v.end());
  cout << "Max Position: " << (maxPos - v.begin()) << "\n";
  return 0;
}