//Two pointer Method of Removing Duplicates

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr){
  if(arr.empty()) return 0;
 
  int slow = 0;
  
  for(int fast = 1; fast < arr.size(); fast++){
    if(arr[fast] != arr[slow]){
      slow++;
      arr[slow] = arr[fast];
    }
  }

  return slow + 1;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 1, 2, 2, 2, 3, 4, 4, 5};

  cout << "Original array: ";
  for(int x: arr) cout << x << " ";
  cout << "\n";

  int newLength = removeDuplicates(arr);

  cout << "Processed array: ";

  for(int i = 0; i < newLength; i++){
    cout << arr[i] << " ";
  }
  cout << "\n";

  cout << "New Length: " << newLength << "\n";

  return 0;
}