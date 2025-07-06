#include <bits/stdc++.h>
using namespace std;
void Sort_buble(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int c =a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
}
void Sort_vib(int a[],int n){
    for(int i = 0;i<n-1;i++){
        int min = a[i];
        int i_min =i;
        for(int j =i+1;j<n;j++){
            if(a[j]<min){
                min = a[j];
                i_min = j;
            }
        }
    a[i_min]=a[i];
    a[i] = min;
    }
}
void Sort_vstav(int a[],int n){
    for(int i=1;i<n;i++){
        int b = a[i];
        int i_b = i;
        while(a[i_b-1]>b && i_b>0){
            a[i_b]=a[i_b-1];
            i_b--;
        }
    a[i_b]=b;
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    Sort_vib(a,n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}