#include <bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<string, int> list;
    int n; cin>>n;
    string name;
    int phoneNumber;
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>phoneNumber;
        list[name]=phoneNumber;
    }
    while(cin>>name){
        if(list.find(name)!= list.end()){
            cout<<name<<"="<<list[name]<<endl;
        } else {
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
