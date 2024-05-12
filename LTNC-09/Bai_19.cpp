#include <bits/stdc++.h>

using namespace std;

int bitwiseAnd(int N, int K) {
    int a[N];
    for(int i=0;i<N;i++){
        a[i]=i+1;
    }
    int max1=-1;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if((a[i]&a[j])>max1 && (a[i]&a[j])<K){
                max1=(a[i]&a[j]);
            }
        }
    }
    return max1;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int N, K;
        cin>>N>>K;
        cout<<bitwiseAnd(N, K)<<endl;
    }
    return 0;
}
