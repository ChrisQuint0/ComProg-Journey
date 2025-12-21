//Codeforces Bear and Finding Criminals
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a;
  cin >> n >> a;

  vector<int> v(n);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  a -= 1;

  int count = 0;

  if(v[a] == 1){
    count++;
  }

  for(int d = 1; d < n; d++){
    int left = a - d;
    int right = a + d;

    bool leftExists = (left >= 0);
    bool rightExists = (right < n);

    if(leftExists && rightExists){
      if(v[left] == 1 && v[right] == 1){
        count += 2;
      }
    } else if(leftExists){
      if(v[left] == 1){
        count++;
      }
    } else if(rightExists){
      if(v[right] == 1){
        count++;
      }
    }
  }

  cout << count << "\n";

  return 0;
}