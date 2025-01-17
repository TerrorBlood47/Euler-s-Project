#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define     all(x)      x.begin(), x.end() 

typedef long long int ll;

void solve(){
    int num_mul_3 = (int)1000/3;
    int num_mul_5 = (int)1000/5;
    int num_mul_both = (int)1000/15;

    int ans = 3*((int)(num_mul_3*(num_mul_3+1))/2) + 5*((int)(num_mul_5*(num_mul_5+1))/2) - 15*((int)(num_mul_both*(num_mul_both+1)/2));
    
    ans -= 1000;
    cout<<"ans : "<<ans<<endl;
}


int main() {
fast_cin();

solve();

return 0;
}