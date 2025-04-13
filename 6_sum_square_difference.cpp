#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define     all(x)      x.begin(), x.end() 

typedef long long int ll;

void solve(void){
    ll n = 100;

    ll res = (n*(n+1)/2)*((n*(n+1)/2) - ((2*n+1)/3));

    cout<<res<<endl;
}



int main() {
fast_cin();

solve();

return 0;
}