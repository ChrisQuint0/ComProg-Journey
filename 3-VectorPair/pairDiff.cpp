//Pair with different types
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  pair<int, string> student = {1, "Alice"};
  cout << "ID: " << student.first << ", Name: " << student.second << "\n";
  
  //Double and Integer
  pair<double, int> scoreAndRank = {95.5, 1};
  cout << "Score: " << scoreAndRank.first << ", Rank: " << scoreAndRank.second << "\n";

  //String and String
  pair<string, string> fullName = {"John", "Doe"};
  cout << "Full Name: " << fullName.first << " " << fullName.second << "\n";

  return 0;
}