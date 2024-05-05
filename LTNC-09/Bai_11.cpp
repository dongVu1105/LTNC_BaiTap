#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<int> st;
    int n; cin>>n;
    while(n!=0){
        int temp = n%2;
        st.push(temp);
        n/=2;
    }
    int max_cnt=0;
    int cnt=0;
    while(!st.empty()){
        int x=st.top();
        st.pop();
        if(x==1){
            cnt++;
            max_cnt = max(max_cnt,cnt);
        } else {
            cnt=0;
        }
    }
    cout<<max_cnt;
    return 0;
}
