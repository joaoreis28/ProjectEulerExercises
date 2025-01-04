#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAX 2000001

#define MAX1 10


//ll resp1 = 0;
bool primo[MAX];


void sieve()
{
    memset(primo, true, sizeof(primo));

    for(ll p = 2; p * p  <= MAX; p++ )
    {
        if(primo[p] == true)
        {
            //resp1 += p;
            for(ll i = p*p; i <= MAX; i +=p)
                primo[i] = false;
        }
    }
}






int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    sieve();
    ll resp = 0;
    for(ll x = 2; x <= MAX; x++)
        if(primo[x])
            resp += x;

    cout << resp << endl;
    //cout << resp1 << endl;



    return 0;
}