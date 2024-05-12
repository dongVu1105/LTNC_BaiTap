#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try {
        cout << stoi(S) << endl;
    } catch (const invalid_argument& ia) {
        cout << "Bad String";
    }

    return 0;
}
