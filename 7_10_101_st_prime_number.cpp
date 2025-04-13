#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define     all(x)      x.begin(), x.end() 

typedef long long int ll;

const ll N = 1e6;
ll dp[N];

void solve(void){
    ll count = 0;
    ll prime = -1;
    for(ll i=2; i<N; i++){

        if(dp[i] == 0){
            count++;
            for(ll j=i*2; j<N; j+=i){
                dp[j] = 1;
            }
        }

        if(count == 10001){
            prime = i;
            break;
        }
    }


    cout<<prime<<endl;
}


int main() {
fast_cin();
solve();
return 0;
}