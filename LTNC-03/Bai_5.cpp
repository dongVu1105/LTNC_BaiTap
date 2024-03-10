#include<bits/stdc++.h>

using namespace std;

int main(){
    string s="hackerrank";
    int m=10;
    int t; cin>>t;
    while (t--){
        int cnt=0;
        string s1; cin>>s1;
        int n=s1.length();
        for(int i=0;i<n;i++){
            if(s1[i]==s[cnt]){
                cnt++;
            }
        }
        if(cnt==m){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

}

