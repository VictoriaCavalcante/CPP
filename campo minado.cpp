#include<bits/stdc++.h>

using namespace std;

main()
{
    int i, n, conta;

    cin >> n;

    int v[n], vv[n];

    for (i=0 ; i<n ; i++)
    {
        cin >> v[i];
    }

    for(i=0 ; i<n ; i++)
    {
        conta = 0;

        if(i==0)
        {
            if(v[i] == 1)
            {
                conta = conta + 1;
            }

            if(v[i+1] == 1)
            {
                conta = conta + 1;
            }
        }
        else if(i==n-1)
        {
            if(v[i]==1)
            {
                conta = conta +1;
            }
            if(v[i-1])
            {
                conta = conta + 1;
            }
        }
        else
        {
            if(v[i]==1)
            {
                conta = conta + 1;
            }
            if(v[i+1]==1)
            {
                conta = conta + 1;
            }
            if(v[i-1]==1)
            {
                conta = conta + 1;
            }
        }

        vv[i] = conta;
    }

    for(i=0 ; i<n ; i++)
    {
        printf("%d\n", vv[i]);
    }

    return 0;
}
