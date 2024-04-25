#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    int q; cin>>q;
    while (q--){
        int val; cin>> val;
        vector<int>::iterator low;
        low = lower_bound(v.begin(), v.end(), val);
        int result = low - v.begin();
        if(v[result] == val){
            cout<<"Yes "<<result+1<<endl;
        } else {
            cout<<"No "<<result+1<<endl;
        }
    }
    return 0;
}

