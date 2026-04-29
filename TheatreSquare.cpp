// Problem Code: 1A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m,a;
    cin>>m>>n>>a;

    long long l= m/a;
    long long w= n/a;

    if(m%a>0 && n%a>0){
        l++;
        w++;
    }
    else if(m%a > 0 && n%a == 0){l++;}
    else{w++;}
 
    cout << l*w;
 
    return 0;
}