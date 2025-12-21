//Pair basics
//#include <utility>
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  //Method 1: Declare and assign
  pair<int, int> p;
  p.first = 10;
  p.second = 20;
  
  cout << "Method 1: " << p.first << " " << p.second << "\n";

  //Method 2
  pair<int, int> p2 = {10, 20};
  cout << "Method 2: " << p2.first << " " << p2.second << "\n";

  //Method 3
  pair<int, int> p3 = make_pair(10, 20);
  cout << "Method 3: " << p3.first << " " << p3.second << "\n";  
  return 0;
}
