// Problem Code: 71A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    vector<string> s(t);
    for(int i=0;i<t;i++){
        cin >> s[i];
    }
    for(int i=0; i<t; i++){
        if(s[i].size() > 10)
            cout << s[i][0] << s[i].size()-2 << s[i][s[i].size()-1] << "\n";
        else
            cout << s[i] << "\n";
    }

    return 0;
}