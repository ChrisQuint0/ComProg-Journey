//STL Practice Problem. Combining it all
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;

  vector<int> v;

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end());

  cout << "Sorted: ";
  for(int x : v) cout << x << " ";
  
  cout << "\nMaximum: ";
  int max = *max_element(v.begin(), v.end());
  cout << max;

  cout << "\nMinimum: ";
  int min = *min_element(v.begin(), v.end());
  cout << min;

  cout << "\nSum: ";
  int sum = accumulate(v.begin(), v.end(), 0);
  cout << sum;

  auto last = unique(v.begin(), v.end());

  v.erase(last, v.end());

  cout << "\nUnique count: ";

  auto count = v.size();

  cout << count;

  return 0;
}