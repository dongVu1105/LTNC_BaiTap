#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.length();
    int n2=s2.length();
    string s=s1+s2;
    char c1=s1[0], c2=s2[0];
    cout<<n1<<" "<<n2<<endl<<s<<endl;
    s1[0]=c2;
    s2[0]=c1;
    cout<<s1<<" "<<s2;
    return 0;
}

