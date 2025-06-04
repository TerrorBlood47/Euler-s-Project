#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define     all(x)      x.begin(), x.end() 

typedef long long int ll;

ll num_of_divisors(ll n){
    set<ll> divisors;

    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            divisors.insert(i);
            divisors.insert(n/i);
        }
    }

    return divisors.size();
}


void solve(void){

    ll val = 0;

    ll _max = 0;
    for(ll n=1;n<=15500;n++){
        val += n;

        ll ndivs = num_of_divisors(val);

        _max = max(_max, ndivs);

        if(ndivs >= 500){
            cout<<val<<endl;
            return;
        }
        // cout<<val<<endl;
    }

    cout<<"max : "<<_max<<endl;
}


int main() {
fast_cin();

solve();

return 0;
}