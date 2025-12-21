//Remove Duplicates from Sorted Array Review
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr){
  int left = 0;
  int right = 1;

  while(right < arr.size()){
    if(arr[right] != arr[left]){
      left++;
      arr[left] = arr[right];
    }

    right++;
  }

  return left + 1;
}

int main(){
  vector<int> arr = {1, 1, 2, 2, 3, 3, 3, 4, 5, 6, 6, 7, 8, 9, 10};

  cout << "Original: ";
  for(int x: arr) cout << x << " ";
  cout << "\n";

  int newLength = removeDuplicates(arr);

  cout << "New Array: ";
  for(int i = 0; i < newLength; i++){
    cout << arr[i] << " ";
  }
  cout << "\n";
  

  return 0;
}