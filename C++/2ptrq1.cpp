#include <bits/stdc++.h>
using namespace std;

void ppair(vector<int> v,int n, int x){
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[i]+v[j]==x){
            cout<<"Yes";
            return;
        }
        else if(v[i]+v[j]<x){i++;}
        else{j--;}
    }
    cout<<"no";
    return;

}

int main(){
    int x=10;
    // cin>>x;
    vector<int> v{1,2,5,6,7,8,12};

    
  	
    //int size=sizeof(arr)/sizeof(arr[0]);
    ppair(v,v.size(),x);


}