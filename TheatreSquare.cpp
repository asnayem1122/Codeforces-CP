// Problem Code: 1A
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    
    long long l = m/a;
    long long w= n/a;

    if(m%a > 0 && n%a > 0) { l++;w++;}
    else if(m%a > 0 && n%a == 0) {l++;}
    else if(m%a == 0 && n%a > 0) {w++;}

    cout << l*w;

    return 0;

}