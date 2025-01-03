#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll upper_bound_primo(ll n)
{
    if(n < 6)
        return 100;
    return ceil(n * (log(n) + log(log(n))));
}

ll sieve(ll n)
{
    bool primo[n + 1];
    memset(primo, true, sizeof(primo));
    for(int p = 2; p*p <= n; p++)
        if(primo[p] == true)
            for(int i = p*p; i <=n; i+=p)
                primo[i] = false;

    ll cont = 0;
    for(int p = 2; p <= n; p++)
        if(primo[p] == true)
        {
            cont++;
            if(cont == 10001)
                return p;
        }
    
    return 0;
}





int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll upBound = upper_bound_primo(10001);
    
    cout << sieve(upBound)<< endl;
    return 0;
}