#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define     all(x)      x.begin(), x.end() 

typedef long long int ll;

void solve(){

    ll _max = -1;

    for(int i=100; i<=999; i++){
        for(int j=100; j<=999; j++){

            ll num = i*j;
            int len = log10(num) + 1 ;
            bool f = false;
            switch (len)
            {
            case 5:
                if(((num/10000)%10 == (num%10)) and ((num/1000)%10 == (num/10)%10)){
                    f = true;
                }
                break;
            case 6:
                if(((num/100000)%10 == (num%10)) and ((num/10000)%10 == (num/10)%10) and ((num/1000)%10 == (num/100)%10)){
                    f = true;
                }
            default:
                break;
            }

            if(f){
                _max = max(_max, num);
            }
        }
    }

    cout<<_max<<endl;
}

int main() {
fast_cin();

solve();
return 0;
}