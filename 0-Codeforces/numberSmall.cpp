//Codeforces Number of Smaller
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, m;
  cin >> n >> m;

  vector<long long> narr(n);
  vector<long long> marr(m);

  for(int i = 0; i < n; i++){
    cin >> narr[i];
  }

  for(int i = 0; i < m; i++){
    cin >> marr[i];
  }

  int right = 0;

  for(int left = 0; left < m; left++){
    while(right < n && marr[left] > narr[right]){
      right++;
    }

    cout << right << " ";
  }
  cout << "\n";

  return 0;
}