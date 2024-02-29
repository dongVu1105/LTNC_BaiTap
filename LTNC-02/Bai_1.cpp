#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    int temp=n;
    int cnt=0;
    while(temp){
        int m=temp%10;
        if(m!=0 && n%m==0){
            cnt++;
        }
        temp/=10;
    }
    return cnt;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<findDigits(n)<<endl;
    }
    return 0;
}

