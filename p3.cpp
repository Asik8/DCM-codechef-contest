#include <iostream>
#include <cstdlib>
using namespace std;

int compare_desc(const void *a, const void *b)
{
    int int_a = *((int *)a);
    int int_b = *((int *)b);

    if (int_a < int_b)
    {
        return 1;
    }
    else if (int_a > int_b)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        qsort(ar, n, sizeof(int), compare_desc);

        int s1 = 0, s2 = 0;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n/2; i++)
            {
                s1+=ar[i];
            }
            for (int i = n/2; i < n; i++)
            {
                s2+=ar[i];
            }
            cout<<s1-s2<<endl;
        }
        else
        {
            for (int i = 0; i < (n/2)+1; i++)
            {
                s1+=ar[i];
            }
            for (int i = n/2+1; i < n; i++)
            {
                s2+=ar[i];
            }
            cout<<s1-s2<<endl;
        }
    }

    return 0;
}
