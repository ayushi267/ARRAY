#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(int);
    int mx=arr[0];
    for(int i=1;i<=n;i++){
       mx=max(mx,arr[i]);
    }
    cout<<mx;
}