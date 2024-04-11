#include<bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    int p1=p/2;
    int n1=n/2;
    int m1=n1-p1;
    return min(m1,p1);
}

int main (){
    int n,p;
    cin>>n>>p;
    cout<<solve(n,p);
    return 0;
}

