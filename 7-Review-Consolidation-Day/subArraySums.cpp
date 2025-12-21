//CSES Subarray Sums I
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  long long n, x;
  cin >> n >> x;

  vector<long long> v(n);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  int left = 0;
  int count = 0;
  long long sum = 0;

  for(int right = 0; right < n; right++){
    sum += v[right];

    while(sum > x && left <= right){
      sum -= v[left];
      left++;
    }

    if(sum == x){
      count++;
      sum -= v[left];
      left++;
    }
  }  
  cout << count << "\n";

  return 0;
}