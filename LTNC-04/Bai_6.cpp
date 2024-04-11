#include <bits/stdc++.h>

using namespace std;

int ucln(int a, int b){
    int x=a, y=b;
    while(y!=0){
        int r=x%y;
        x=y;
        y=r;
    }
    return x;
}

int bcnn(int a, int b){
    return a*b/ucln(a,b);
}

int countBetween(int n, int m, int a[], int b[]){
    int bcnnA = a[0], uclnB=b[0];
    for(int i=1; i<n;i++){
        bcnnA=bcnn(bcnnA, a[i]);
    }
    for(int i=1;i<m;i++){
        uclnB=ucln(uclnB, b[i]);
    }
    int cnt=0;
    for(int i=bcnnA; i<=uclnB;i+=bcnnA){
        if(uclnB%i==0){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[11],b[11];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    cout<<countBetween(n,m,a, b);
    return 0;
}

