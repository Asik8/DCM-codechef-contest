#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n==2) cout<<1<<endl;
        else 
        {
            int c=0;
            c += n/4;
            n%=4;
            c += n/2;
            cout<<c<<endl;
        }
    }

    return 0;
}