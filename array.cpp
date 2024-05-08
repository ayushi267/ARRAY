#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(int);
    int product=1;
    for(int i= 0;i<=n-1;i++){
        product *= arr[i];

    }
    cout<<product;
}