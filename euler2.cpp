#include <bits/stdc++.h>
using namespace std;



int main()
{
    int resp  = 0;
    int a = 0;
    int b = 1;
    int aux;
    while( aux < 4000000)
    {
        aux  = a + b;
        a = b;
        b = aux;

        if(aux % 2 == 0)
            resp += aux;

    }

    cout << resp << "\n";
    return 0;
}