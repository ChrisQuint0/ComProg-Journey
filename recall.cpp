//Reviewing: Sort the arrays
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

  vector<int> sv = v;

  sort(sv.begin(), sv.end());

  int left = -1, right = -1;

  for(int i = 0; i < n; i++){
    if(v[i] != sv[i]){
       if(left == -1){
         left = i;
       }

       right = i;
    }
  }

  if(left == -1){
    cout << "yes\n";
    cout << "1 1";

    return 0;
  }

  reverse(v.begin() + left, v.begin() + right + 1);

  if(v == sv){
    cout << "yes\n";
    cout << left + 1 << " " << right + 1;
  } else {
    cout << "no\n";
  }
  
  return 0;
}