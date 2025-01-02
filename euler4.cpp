#include <bits/stdc++.h>
using namespace std;

int is_palindro(int x)
{
    string s = to_string(x);

    int l = 0, r = s.length() - 1 ;
   
    while( l <= r)
    {
        if(s[l] != s[r])
            return 0;
        l++;
        r--;
    }
    
    return 1;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int max = 0;
    for(int i = 100; i < 1000; i++)
        for(int j = 100; j < 1000; j++)
             if(is_palindro(i*j) && (i*j > max))             
                max  = i*j;
             
    
    cout << max << endl;
    
    return 0;

}