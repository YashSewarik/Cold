// Code in cpp to tell if there exists a pair in array whose
// sum results in x.
#include <bits/stdc++.h>
using namespace std;


void ppair(vector<int> arr,int n,int x){
    int temp;
    unordered_set<int> s;
    for(int i{0};i<n;i++){
        s.insert(arr[i]);
    }
    for (int j{0};j<n;j++){
        temp=x-arr[j];
        if(s.find(temp)!=s.end()){
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";return;

    

}
int main(){
    int x=10;
    // cin>>x;
    vector<int> v{1,2,5,6,12,8,7};

    
  	
    //int size=sizeof(arr)/sizeof(arr[0]);
    ppair(v,v.size(),x);


}