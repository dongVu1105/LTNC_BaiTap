#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int left=0,right=0;
        int n; cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            v.push_back(x);
        }
        for(int i=1;i<n;i++){
            right+=v[i];
        }
        bool flag=false;
        if(left==right){
            flag=true;
        } else {
            for(int i=1;i<n;i++){
                left+=v[i-1];
                right-=v[i];
                if(left==right){
                    flag=true;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}

