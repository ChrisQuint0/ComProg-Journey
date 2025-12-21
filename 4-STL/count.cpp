//Counting occurences with STL
//So far: sort, *max_element, *min_element, reverse, accumulate
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> v = {1, 2, 3, 2, 4, 2, 5};

  int countOf2 = count(v.begin(), v.end(), 2);

  cout << "Number of 2s: " << countOf2 << endl;

  return 0;
}
