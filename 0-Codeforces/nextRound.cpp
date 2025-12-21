//Codeforces Next Round
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int n, k;
  cin >> n >> k;

  vector<int> v;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
  }

  int passing = v[k - 1];

  int count = 0;

  for(int i = 0; i < n; i++){
    if(v[i] >= passing && v[i] > 0){
      count++;
    }
  }

  cout << count << "\n";
 
  return 0;
}