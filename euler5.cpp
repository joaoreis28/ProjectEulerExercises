#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(int x)
{
    for( int i = 3; i < 21; i++)
    {
        if(x % i != 0)
            return 0;
    }
    return 1;
}



int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    

    for(ll i = 20; i < 121645100408832000; i = i + 2)
    {
        if(solve(i))
        {
            cout << i << endl;
            return 0;
        }
    }
    
    return 0;

}