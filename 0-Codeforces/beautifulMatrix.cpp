//Codeforces Beautiful Matrix
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  

  int arr[5][5]; //The input is always gonna be a 5x5 matrix

  int x = 0;
  int y = 0;

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      cin >> arr[i][j]; //Populate the array with the matrix

      if(arr[i][j] == 1){
        //Take note of the location of 1
        x = i;
        y = j;
      }
    }
  }

  cout << abs(x-2) + abs(y-2) << "\n"; //Subtract the coordinates with center 2,2, use abs to make sure it's always positive

  
  return 0;
}