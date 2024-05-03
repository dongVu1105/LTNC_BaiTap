#include<bits/stdc++.h>

using namespace std;

void genString(vector<string> &v, string s, int n, int i){
    if(i==n){
        v.push_back(s);
        return;
    }
    genString(v, s+"a", n, i+1);
    genString(v, s+"b", n, i+1);
    genString(v, s+"c", n, i+1);
    genString(v, s+"d", n, i+1);
}

int main()
{
	vector<string> v;
	genString(v, "", 3, 0);
	for(string x : v){
        cout<<x<<endl;
	}
}
