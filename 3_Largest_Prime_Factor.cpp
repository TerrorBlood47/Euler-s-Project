#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define     all(x)      x.begin(), x.end() 

typedef long long int ll;

void solve(void){
    ll num = 600851475143;
    ll max_prime = -1;
    ll s = sqrt(num);
    for(ll i=2; i<=s ; i++){

        if(num % i == 0){
            while(num%i==0 and num>=i){
                num /= i;
            }

            max_prime = max(max_prime, i);
        }

        if(i > num) break;
    }

    if(num > 1) max_prime = max(max_prime, num);
    
    cout<<max_prime<<endl;
}


int main() {
fast_cin();


solve();

return 0;
}