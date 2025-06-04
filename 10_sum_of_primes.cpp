#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define     all(x)      x.begin(), x.end() 

typedef long long int ll;

#define N int(2e6 + 2)
bool not_primes[N] = {false};

void solve(void){

    ll sum = 0;
    for(ll i=2; i<=N-2; i++){

        if(!not_primes[i]){
            sum += i;
            for(ll j=2; i*j<=N-1; j++){
                not_primes[j*i] = true;
            }
        }
    }

    cout<<"sum : "<<sum<<endl;
}


int main() {
fast_cin();
solve();
return 0;
}