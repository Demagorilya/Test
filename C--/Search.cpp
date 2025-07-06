#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin >> n;
    cin >> e;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    bool b = true;
for (int i=0;i<n;i++){
if(a[i]==e){
    cout << "Число знайдено на позиції "<<i+1;
    b = false;
    break;
}
}
if(b){
    cout << "Число не знайдено";
 }
    return 0;
}