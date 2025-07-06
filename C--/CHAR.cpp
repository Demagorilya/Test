#include <bits/stdc++.h>

using namespace std;

int main(){
    char s[1000];
    cin.getline(s, 1000);
    int n = strlen(s) ;
    int a=0;
    for(int i =0 ;i<n;i++){
        if(s[i]!='a'){
            cout << s[i] ; 
        }

    }
return 0;
}