//Finding an element using stl
//So far: sort *max_element *min_element reverse accumulate count 
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<int> v = {1, 2, 3, 4, 5};

  auto it = find(v.begin(), v.end(), 3);

  if(it != v.end()){
    cout << "Found 3 at position: " << (it - v.begin()) << "\n";
  } else{
    cout << "3 not found\n";
  }
  return 0;
}