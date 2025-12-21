#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x;
    cin >> n >> x;
    
    vector<pair<int, int>> arr(n);  // {value, original_index}
    
    for(int i = 0; i < n; i++){
        cin >> arr[i].first;        // value
        arr[i].second = i + 1;      // 1-indexed position
    }
    
    // Sort by value (pair sorts by first element by default)
    sort(arr.begin(), arr.end());
    
    int left = 0;
    int right = n - 1;
    
    while(left < right){
        long long sum = (long long)arr[left].first + arr[right].first;
        
        if(sum == x){
            // Found the pair! Print their original indices
            cout << arr[left].second << " " << arr[right].second << endl;
            return 0;
        }
        else if(sum < x){
            left++;
        }
        else{
            right--;
        }
    }
    
    // No pair found
    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}