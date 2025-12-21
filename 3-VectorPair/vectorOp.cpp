//Vector basic operations
//#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<int> v = {5, 2, 8, 1, 9};

  //Size
  cout << "Size: " << v.size() << "\n";

  //Check if empty
  if(v.empty()){
    cout << "Vector is empty" << "\n";
  } else {
    cout << "Vector is not empty" << "\n";
  }

  //Access first and last element
  cout << "First: " << v.front() << "\n";
  cout << "Last: " << v.back() << "\n";

  v.pop_back(); //Remove the last element

  //Clear all elements
  //v.clear();
  
  //Sorting 
  sort(v.begin(), v.end());
  for(int x: v) cout << x << " ";
  cout << "\n";

  //Reverse

  reverse(v.begin(), v.end());
  for(int x : v) cout << x << " ";
  cout << "\n";
  
  return 0;
}