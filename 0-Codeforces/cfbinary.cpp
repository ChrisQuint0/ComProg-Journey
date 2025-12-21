//Codeforces Binary Search
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& v, int target){
  int left = 0;
  int right = v.size() - 1;

  while(left <= right){
    int mid = left + (right - left) / 2;

    if(v[mid] == target){
      return 1;
    } else if(v[mid] < target){
      left = mid + 1;
    } else if(v[mid] > target){
      right = mid - 1;
    }
  }

  return -1; //Not found
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, k;
  cin >> n >> k;

  vector<int> v(n);
  vector<int> vk(k);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  
  //Number of queries k
  for(int i = 0; i < k; i++){
    cin >> vk[i];
  }

  for(int i = 0; i < k; i++){
    if(binarySearch(v, vk[i]) != -1){
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  
  return 0;
}