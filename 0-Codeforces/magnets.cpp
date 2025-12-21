//Codeforces magnets
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<string> v;

  for(int i = 0; i < n; i++){
    string x;
    cin >> x;
    v.push_back(x);
  }

  //for(auto x: v){
    //cout << x << " ";
  //}

  int count = 0;

  char previous = v[0][1];

  for(int i = 1; i < v.size(); i++){
      if(v[i][0] == previous){
         count++;
      } 

      previous = v[i][1];
  }

  count++;

  cout << count << "\n";

  return 0;
}