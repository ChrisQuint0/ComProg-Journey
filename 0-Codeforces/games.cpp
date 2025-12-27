//Codeforces Games
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<pair<int, int>> uniforms(n);

  for(int i = 0; i < n; i++){
    int h, a;
    cin >> h >> a;
    uniforms[i] = {h, a};
  }

  int count = 0;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i != j){
        if(uniforms[i].first == uniforms[j].second){
          count++;
        }
      }
    }
  }

  cout << count << "\n";
  return 0;
}