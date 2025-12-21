//Codeforces Vanya and Fence
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, h;

  cin >> n >> h;

  vector<int> v;

  for(int i = 0; i < n; i++){
    int x; 
    cin >> x;
    v.push_back(x);
  }

  int width = 0;

  for(int x  : v){
    if(x > h){
      width += 2;
    } else {
      width++;
    }
  }

  cout << width << "\n";

  return 0;
}