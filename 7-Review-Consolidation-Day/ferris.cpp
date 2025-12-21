//CSES Ferris Wheel
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, x;
  cin >> n >> x;

  vector<int> v(n);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  int left = 0;
  int right = n - 1;
  int sum = 0;
  int count = 0;

  while(left <= right){
    if(v[left] + v[right] <= x){
      left++;
      right--;
    } else {
      right--;
    }

    count++;
  }
  cout << count << "\n";

  return 0;
}