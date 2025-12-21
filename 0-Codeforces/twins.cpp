//Codeforces twins: better code
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int totalSum = 0;

  vector<int> v;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    totalSum += x;
    v.push_back(x);
  }

  int count = 0;

  int mySum = 0;

  for(int i = 0; i < n; i++){
    mySum += v[i];
    count++;

    int twinSum = totalSum - mySum;

    if(mySum > twinSum){
      break;
    }
  }

  cout << count << "\n";
}