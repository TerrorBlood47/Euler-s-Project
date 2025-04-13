#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define     all(x)      x.begin(), x.end() 

typedef long long int ll;

ll lcm(ll &a, ll &b){
    return ( (a*b)/__gcd(a,b) );
}

void solve(void){
    ll _lcm = 2;

    for(ll i=3; i<=20; i++){
        _lcm = lcm(_lcm, i);
    }

    cout<<_lcm<<endl;

}


int main() {
fast_cin();

solve();
return 0;
}