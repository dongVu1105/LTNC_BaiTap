#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q; cin>>q;
    while(q--){
        string s; cin>>s;
        int n= s.length();
        for(int i=0;i<n;i+=2){
            cout<<s[i];
        }
        cout<<" ";
        for(int i=1;i<n;i+=2){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
