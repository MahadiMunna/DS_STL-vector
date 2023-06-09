#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> x={10,20,30,40};
    vector<int> v={1,2,3};
    v=x;
    v.push_back(50);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // v.insert(v.begin()+2,25);
    v.insert(v.begin()+2,x.begin(),x.end());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    // v.erase(v.begin()+2);
    v.erase(v.begin()+2,v.begin()+4);
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}