#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    cin>>n>>q;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        int m; cin>>m;
        for(int j=0;j<m;j++){
            int x; cin>>x;
            v[i].push_back(x);
        }
    }
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<v[x][y]<<endl;
    }
    return 0;
}

