//Binary search bananas
//Koko has N piles of bananas. Guard returns in H hours. Find minimum eating speed K such that she can eat all the bananas

#include <bits/stdc++.h>
using namespace std;

bool canFinish(vector<int>& piles, int K, int hours){
  long long hoursNeeded = 0;

  for(int pile: piles){
    hoursNeeded += (pile + K - 1) / K;
  }

  return hoursNeeded <= hours;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  vector<int> arr = {3, 6, 7, 11};

  long long h = 8;

  int left = 1;
  int right = *max_element(arr.begin(), arr.end());

  int answer = 0;

  while(left <= right){
    int mid = left + (right - left) / 2;

    if(canFinish(arr, mid, h)){
      answer = mid;
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }

  cout << "Minimum Speed: " << answer << "\n";


  return 0;
}