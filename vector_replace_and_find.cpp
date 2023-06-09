#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5,6};
    replace(v.begin(),v.end(),2,100);//2 will be replace by 100
    
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    // vector<int>:: iterator it;
    auto it=find(v.begin(),v.end(),4);
    cout<<*it;
    return 0;
}