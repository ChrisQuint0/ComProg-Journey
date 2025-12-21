//Codeforces Queue at the School
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, t;
  cin >> n >> t;

  string a;
  cin >> a;

  while(t > 0){
    for(int i = 0; i < n; i++){
      if(i == 0){
        continue;
      }

      if(a[i] == 'G'){
        char temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
        i++;
      }
    }
  
    t--;
  }
  
  
  cout << a << "\n";

  return 0;
}