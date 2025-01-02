#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll expbin( ll a, ll exp)
{
    if(exp == 0)
        return 1;
    if(exp & 1)
        return  a * expbin(a, exp - 1);
    ll b = expbin( a, exp/2);
    return b*b;
}


int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll sum_of_sqa = 0;
    ll sqa_of_sum = 0;
    for(ll i = 1; i < 101; i++)    
        sum_of_sqa += expbin(i, 2);

    sqa_of_sum = expbin((100*(1+100))/2, 2 );
       
    cout << sqa_of_sum - sum_of_sqa << endl;
    

   
    
    return 0;

}