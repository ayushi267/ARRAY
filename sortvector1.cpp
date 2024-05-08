#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(6);
     int v[i]={1,2,3,4};
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout << endl;
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
}
