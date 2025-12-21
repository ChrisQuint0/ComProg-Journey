//Codeforces arrival of the general
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;

  vector<int> v;

  int seconds = 0;

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
  }

  auto maxPos = max_element(v.begin(), v.end());

  seconds += (maxPos - v.begin());

  auto minPos = min_element(v.begin(), v.end());
  int minPosi = minPos - v.begin();
  int min = v[minPosi];

  for(int i = 0; i < n; i++){
    if(v[i] == min && i > minPosi){
      minPosi = i;
    }
  }

  seconds += (n-1) - minPosi;

  if(maxPos - v.begin() > minPosi){
    seconds--;
  }

  cout << seconds << "\n";
  return 0;
}