#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int positive=0, negative=0, zero=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            positive++;
        } else if(a[i]<0){
            negative++;
        } else zero++;
    }
    cout<<fixed<<setprecision(6)<<1.0*positive/n<<endl<<1.0*negative/n<<endl<<1.0*zero/n;
    return 0;
}

