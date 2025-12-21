//Vector basic creation and iteration

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  //Creating vectors
  vector<int> v;
  vector<int> v1(5);
  vector<int> v2(5, 10); // {10, 10, 10, 10, 10}
  vector<int> v3 = {1, 2, 3};

  //Adding elements
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);

  //Accessing elements
  cout << v[0] << "\n";
  cout << v[1] << "\n";

  //Size of vector
  cout << "Size: " << v.size() << "\n";
  
  //Iterating through a vector
  for(int i = 0; i < v.size(); i++){
    cout << v[i] << "\n";
  }

  //Iterating through a vector (Cooler!)
  for(int x : v){
    cout << x << " ";
  }

  cout << "\n";

  return 0;
}