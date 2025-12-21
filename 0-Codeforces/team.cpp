//Codeforces Team
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  //Get the number of programming problems
  int n;
  cin >> n;

  int arr[n][3]; //N number of problems, 3 person team


  int count = 0;

  for(int i = 0; i < n; i++){
    int sum = 0; //The sum resets here
    for(int j = 0; j < 3; j++){
       cin >> arr[i][j];
       sum += arr[i][j]; //Add it to the sum right away
    }
    
    if(sum >= 2){
      count++; //If the sum is greater than 2 then they are going to implement it, count it.
    }
  }

  cout << count << "\n";

  return 0;
}