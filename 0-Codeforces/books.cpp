//Codeforces Books
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, t;
  cin >> n >> t;

  vector<int> arr(n);

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int left = 0;
  int currentMins = 0;
  int maxBooks = 0;

  for(int right = 0; right < n; right++){
    currentMins += arr[right];

    while(currentMins > t && left <= right){
      currentMins -= arr[left];
      left++;
    }

    maxBooks = max(maxBooks, right - left + 1);
  }

  cout << maxBooks << "\n";

  return 0;
}