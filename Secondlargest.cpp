#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(int);
   int mx= INT16_MIN;
   int smx= INT16_MIN;
   for(int i=0;i<n;i++){
    if(mx<arr[i])
    mx=arr[i];
   }
for( int i=0;i<n;i++){
    if(smx<arr[i] && mx !=arr[i])
        smx=arr[i];
    
}
    cout<<mx <<" "<<smx;
}