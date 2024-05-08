#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(int);
  int x;
  cout<<"Enter a number:";
  cin>>x;
  bool flag=false;

    for(int i= 0;i<=n-1;i++){
        if(arr[i]==x){
        flag=true;
    }
    }
    if(flag==true){
        cout<<x<<"present";
    }
    else {
        cout<<x<<"not present";
    }
 
}