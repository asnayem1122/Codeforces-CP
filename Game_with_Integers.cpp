//Problem Code: 1899A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        if(n%3 == 0)
            cout << "Second"<<"\n";
        
        else
            cout << "First" << "\n";
        
    }

    return 0;
}