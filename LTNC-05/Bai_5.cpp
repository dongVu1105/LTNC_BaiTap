#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int> s;
    int q; cin>>q;
    while(q--){
        int opt; cin>>opt;
        int val; cin>>val;
        if(opt == 1){
            s.insert(val);
        } else if(opt == 2){
            s.erase(val);
        } else {
            if(s.find(val)!=s.end()){
                cout<<"Yes"<<endl;
            } else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}

