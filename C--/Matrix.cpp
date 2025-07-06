#include <bits/stdc++.h>
using namespace std;

int main(){

int n,m,min;
cin  >> n >> m;
int a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
 cin >> a[i][j];
    }
}
for(int i=0;i<m;i++){
    min = a[0][i];
    for(int j=0;j<n;j++){
        if(a[j][i]<min){
            min = a[j][i];
        }
    }
    cout << min << " ";
}
return 0;
}