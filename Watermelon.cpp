// Problem Code: 4A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int w; cin >> w;
    if(w == 2){
        cout<<"NO";
        return 0;
    }
    
    if(w%2 == 0){
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}