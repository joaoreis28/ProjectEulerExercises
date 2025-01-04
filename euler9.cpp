#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int a,b,c, c2;
    
    for(a = 1; a < 1001 ; a++)
    {
        for(b = a + 1 ; b < 1001 -a; b++)
        {
            c2 = a*a + b*b;
            c = sqrt(c2);

            if( c * c != c2)
                continue;
            

            if(a + b + c == 1000)
            {
                cout << a << b << c << endl;
                int resp = a*b*c;
                cout << resp << endl;
                return 0;
            }

        }
    }

    return 0;
}