#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> mp;
    int q; cin>>q;
    while(q--){
        int opt; cin>>opt;
        string name; cin>>name;
        if(opt == 1){
            int val; cin>>val;
            mp[name]+=val;
        } else if(opt == 2){
            mp[name]=0;
        } else {
            cout << mp[name]<<endl;
        }
    }
    return 0;
}

