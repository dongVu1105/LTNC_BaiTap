#include<bits/stdc++.h>

using namespace std;

bool check(string s1){
    int n=s1.length();
    for(int i=0;i<n;i++){
        if(s1[i]!=s1[n-1-i]){
            return false;
        }
    }
    return true;
}

int index(string s){
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            if(check(s.substr(0,i)+s.substr(i+1))){
                return i;
            } else if(check(s.substr(0,n-1-i)+s.substr(n-i))){
                return n-1-i;
            } else return -1;
        }
    }
    return -1;
}

int main (){
    int q; cin>>q;
    while(q--){
        string s; cin>>s;
        cout<<index(s)<<endl;
    }
}

