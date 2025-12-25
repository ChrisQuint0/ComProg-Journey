//Codeforces Anton and Polyhedrons
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;

  int totalFaces = 0;

  for(int i = 0; i < n; i++){
    string s;
    cin >> s;

    if(s == "Tetrahedron"){
      totalFaces += 4;
    } else if (s == "Cube"){
      totalFaces += 6;
    } else if(s == "Octahedron"){
      totalFaces += 8;
    } else if(s == "Dodecahedron"){
      totalFaces += 12;
    } else if(s == "Icosahedron"){
      totalFaces += 20;
    }
  }

  cout << totalFaces << "\n";

  return 0;
}