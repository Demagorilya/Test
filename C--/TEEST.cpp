#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,c=0;
cin >> n;
int a[n];
for(int i=0;i<n;i++){
cin >>a[i];
}
for(int i=0;i<n;i++){
    c+=a[i];
}
if (c%n!=0){
    cout << -1;
}
return 0;
}