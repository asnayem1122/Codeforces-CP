//Problem Code: 1858A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        long long anna = (c + 1) / 2;
        long long katie = c / 2;

        if((a + anna) > (b + katie)) cout << "First\n";
        else cout << "Second\n";
    }

    return 0;
}