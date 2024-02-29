#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> a) {
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])%k==0){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
    }
    cout<<divisibleSumPairs(n,k,a);
    return 0;
}

