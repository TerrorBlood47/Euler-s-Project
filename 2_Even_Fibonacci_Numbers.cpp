#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define     all(x)      x.begin(), x.end() 

typedef long long int ll;
void solve(){
    ll sum = 0;
    int a = 1;
    int b = 2;
    sum +=  b;

    int max = 4e6;

    do{
        int t = b;
        b += a;
        a = t;

        if(b%2==0) sum += b;
    }while(b<=max);

    cout<<sum<<endl;
}


int main() {
fast_cin();

solve();

return 0;
}