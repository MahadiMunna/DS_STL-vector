#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    // cout<<v.size()<<endl;
    // cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(20);
    cout<<v.capacity()<<endl;
    v.push_back(30);
    cout<<v.capacity()<<endl;//capacity over hoye gele digun kore baray
    for(int i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
    cout<<v.size()<<endl;
    v.resize(2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
    v.clear();//just clear the size but value store in internal memory
    cout<<v.size()<<endl;
    cout<<v.empty()<<endl;//return true false




    return 0;
}