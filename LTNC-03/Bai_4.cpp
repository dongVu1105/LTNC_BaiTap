#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int cnt=1;
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            cnt++;
        }
    }
    cout<<cnt;
}

