//Practice problem print unique numbers in vector
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

  cout << v[0] << " ";
 
  for(int i = 1; i < n; i++){
    if(v[i] != v[i - 1]){
      cout << v[i] << " ";
    }
  }

  cout << "\n";

  // 1 1 2 3 3 4 5 

  return 0;
}