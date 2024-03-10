#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    string AM_PM = s.substr(8);
    string hStr= s.substr(0,2);
    int hour=stoi(hStr);
    if(AM_PM=="PM"){
        if(hour<12) {
            hour+=12;
            string hour1=to_string(hour);
            s[0]=hour1[0];
            s[1]=hour1[1];
        }
    } else {
        if(hour==12){
            s[0]='0';
            s[1]='0';
        }
    }
    string res = s.substr(0,8);
    cout<<res;
}

