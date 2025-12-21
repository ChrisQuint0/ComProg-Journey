//Codeforces Magic Powder
#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> need;
vector<int> avail;

bool canBake(int cookies){
  long long powderNeeded = 0;

  for(int i = 0; i < n; i++){
    long long required = (long long)cookies * need[i];
    long long available = avail[i];

    if(required > available){
      powderNeeded += required - available;
    }

    if(powderNeeded > k){
      return false;
    }
  }

  return powderNeeded <= k;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> k;

  need.resize(n);
  avail.resize(n);

  for(int i = 0; i < n; i++){
    cin >> need[i];
  }

  for(int i = 0; i < n; i++){
    cin >> avail[i];
  }

  int left = 0;
  int right = 2000;
  int answer = 0;

  while(left <= right){
    int mid = left + (right - left) / 2;

    if(canBake(mid)){
      answer = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  cout << answer << "\n";

  

  return 0;
}