#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define     all(x)      x.begin(), x.end() 

typedef long long int ll;

void solve(void){
    int a,b,c;
    bool f = false;
    for(a=1; a<=999; a++){
        for(b = a+1; b<=999; b++){
            c = (1000*1000 - 2*a*b) / 2000;

            if(a+b+c==1000 and (a*a+b*b) == c*c){
                cout<<"a : "<<a<<" b: "<<b << " c: "<<c<<endl;
                cout<<"abc : "<<a*b*c<<endl;
                f = true;
                return;
            }
        }
    }

    if(!f) cout<<"not found"<<endl;
}


int main() {
fast_cin();

solve();

return 0;
}