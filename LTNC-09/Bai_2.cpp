#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int i1;
    double d1;
    cin>>i1>>d1;
    string s1;
    getline(cin, s1);
    getline(cin, s1);
    cout<<i+i1<<endl;
    cout<<fixed<<setprecision(1)<<d+d1<<endl;
    cout<<s+s1;
    return 0;
}
