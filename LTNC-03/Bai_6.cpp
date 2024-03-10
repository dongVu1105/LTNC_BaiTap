#include<bits/stdc++.h>

using namespace std;

char convert (char c, int k){
    if(c>='A' && c <='Z'){
        int x=(c-'A'+k)%26;
        return x+'A';
    } else if(c>='a' && c <='z'){
        int x=(c-'a'+k)%26;
        return x+'a';
    } else return c;
}

int main(){
    int n; cin>>n;
    string s; cin>>s;
    int k; cin>>k;
    for(int i=0;i<n;i++){
        s[i]=convert(s[i],k);
    }
    cout<<s;
}

