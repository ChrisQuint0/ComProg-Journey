//Codeforces Way Too Long Words
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  //How many words are they going to input?
  int n;
  cin >> n;

  string arr[n]; //Declare a string array where we would store the words

  for(int i = 0; i < n; i++){
    cin >> arr[i]; //Populate the array
  }

  for(int i = 0; i < n; i++){
    if(arr[i].length() <= 10){
      cout << arr[i] << "\n"; //If the word at ith index has less than or equal 10 letters then print it as is
    } else{
      //If it's more than 10 abbreviate it
      cout << arr[i][0] << (arr[i].length() - 2) << arr[i][arr[i].length() - 1] << "\n";
    }
  }

  return 0;
}