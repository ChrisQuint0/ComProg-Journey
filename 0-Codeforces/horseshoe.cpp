//Codeforces Is your horseshoe on the other hoof?
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  set<long long> shoes = {a, b, c, d};

  cout << 4 - shoes.size() << "\n";

  return 0;
}